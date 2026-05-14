#include "usb_device_driver/usb_reader_node.hpp"
#include <sstream>
#include <fstream>
#include <filesystem>
#include <regex>
#include <iostream>

namespace usb_device_driver
{

    USBReaderNode::USBReaderNode(const rclcpp::NodeOptions &options)
        : Node("usb_reader_node", options)
    {
        RCLCPP_INFO(this->get_logger(), "USB Reader Node 启动");

        // 初始化参数
        initParameters();

        // 新增发布者
        motor_states_pub_ = this->create_publisher<usb_device_driver::msg::MotorsStates>(
            "/usb/motors_states", 10);
        imu_states_pub_ = this->create_publisher<usb_device_driver::msg::IMUData>(
            "/usb/imu_data", 10);
        // 订阅者
        motor_cmd_sub_ = this->create_subscription<usb_device_driver::msg::MotorsCmd>(
            "motor_cmd", 10,
            std::bind(&USBReaderNode::sendMotorCmdToSerial, this, std::placeholders::_1));

        // 初始化串口
        if (initSerialPort())
        {
            is_connected_ = true;
            running_ = true;

            // 启动读取线程
            read_thread_ = std::thread(&USBReaderNode::readSerialThread, this);

            RCLCPP_INFO(this->get_logger(), "串口连接成功: %s, 波特率: %d",
                        port_.c_str(), baudrate_);
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "串口连接失败");
        }

        // 创建连接检查定时器(该定时器绑定checkConnection函数,用于检查USB设备连接状态)
        connection_timer_ = this->create_wall_timer(
            std::chrono::seconds(5),
            std::bind(&USBReaderNode::checkConnection, this));
    }

    USBReaderNode::~USBReaderNode()
    {
        RCLCPP_INFO(this->get_logger(), "正在关闭USB Reader Node...");
        running_ = false;

        if (read_thread_.joinable()) // 确保线程可加入
        {
            read_thread_.join(); // 等待读取线程结束，确保资源释放，加入诛仙成，确保线程安全退出
        }

        cleanup(); // 调用清理函数，释放串口资源和其他相关资源

        RCLCPP_INFO(this->get_logger(), "USB Reader Node 已关闭");
        RCLCPP_INFO(this->get_logger(), "接收统计: %zu 字节, %zu 条消息",
                    bytes_received_, messages_received_);
    }

    void USBReaderNode::initParameters()
    {
        // 声明参数并声明默认值
        this->declare_parameter<std::string>("port", "/dev/ttyACM0");
        this->declare_parameter<int>("baudrate", 115200);
        this->declare_parameter<double>("timeout", 1.0);
        this->declare_parameter<bool>("debug", false);
        this->declare_parameter<int>("read_buffer_size", 1024);
        this->declare_parameter<bool>("auto_detect", true);

        // 获取参数
        port_ = this->get_parameter("port").as_string();
        baudrate_ = this->get_parameter("baudrate").as_int();
        timeout_ = this->get_parameter("timeout").as_double();
        debug_ = this->get_parameter("debug").as_bool();
        read_buffer_size_ = this->get_parameter("read_buffer_size").as_int();
        bool auto_detect = this->get_parameter("auto_detect").as_bool();

        // 自动检测设备
        if (auto_detect && port_.empty()) // 如果没有检测到config定义的设备，且自动检测功能已开启
        {
            auto detected_port = autoDetectDevice(); // 调用自动检测设备函数
            if (!detected_port.empty())
            {
                port_ = detected_port;
                RCLCPP_INFO(this->get_logger(), "自动检测到设备: %s", port_.c_str());
            }
        }

        RCLCPP_INFO(this->get_logger(), "参数配置:");
        RCLCPP_INFO(this->get_logger(), "  Port: %s", port_.c_str());
        RCLCPP_INFO(this->get_logger(), "  Baudrate: %d", baudrate_);
        RCLCPP_INFO(this->get_logger(), "  Timeout: %.2f", timeout_);
        RCLCPP_INFO(this->get_logger(), "  Debug: %s", debug_ ? "true" : "false");
    }

    std::string USBReaderNode::autoDetectDevice()
    {
        RCLCPP_INFO(this->get_logger(), "开始自动检测串口设备...");

        std::vector<std::string> possible_paths = {
            "/dev/ttyACM0", "/dev/ttyACM1", "/dev/ttyACM2",
            "/dev/ttyUSB0", "/dev/ttyUSB1", "/dev/ttyUSB2",
            "/dev/ttyS0", "/dev/ttyS1", "/dev/ttyS2"}; // 可能的串口路径，但是在这里定义是不是不太优雅

        // 遍历可能的串口路径，检查是否可用
        for (const auto &port : possible_paths)
        {
            RCLCPP_DEBUG(this->get_logger(), "尝试检测端口: %s", port.c_str());

            // 检查文件是否存在
            if (!std::filesystem::exists(port))
            {
                continue;
            }

            try
            {
                RCLCPP_DEBUG(this->get_logger(), "尝试打开端口: %s", port.c_str());

                // 尝试以只读方式打开文件，检查权限
                std::ifstream test_file(port);
                if (!test_file.is_open())
                {
                    RCLCPP_DEBUG(this->get_logger(), "无法打开端口 %s (权限不足?)", port.c_str());
                    continue;
                }
                test_file.close();

                // 尝试通过libserial打开
                std::lock_guard<std::mutex> lock(serial_mutex_);
                LibSerial::SerialPort test_port;
                test_port.Open(port);

                if (test_port.IsOpen())
                {
                    test_port.Close();
                    RCLCPP_INFO(this->get_logger(), "找到可用端口: %s", port.c_str());
                    return port;
                }
            }
            catch (const std::exception &e)
            {
                RCLCPP_DEBUG(this->get_logger(), "端口 %s 不可用: %s", port.c_str(), e.what());
                continue;
            }
        }

        RCLCPP_WARN(this->get_logger(), "未找到可用的串口设备");
        return "";
    }

    // 初始化串口
    bool USBReaderNode::initSerialPort()
    {
        if (port_.empty())
        {
            RCLCPP_ERROR(this->get_logger(), "端口未指定");
            return false;
        }

        try
        {
            // 检查端口是否存在
            if (!std::filesystem::exists(port_))
            {
                RCLCPP_ERROR(this->get_logger(), "端口不存在: %s", port_.c_str());
                return false;
            }

            // 打开串口，保护serial_port_的线程安全访问
            std::lock_guard<std::mutex> lock(serial_mutex_);
            serial_port_.Open(port_);

            if (!serial_port_.IsOpen())
            {
                RCLCPP_ERROR(this->get_logger(), "无法打开串口: %s", port_.c_str());
                return false;
            }

            // 配置串口参数
            LibSerial::BaudRate libserial_baudrate;
            switch (baudrate_)
            {
            case 9600:
                libserial_baudrate = LibSerial::BaudRate::BAUD_9600;
                break;
            case 19200:
                libserial_baudrate = LibSerial::BaudRate::BAUD_19200;
                break;
            case 38400:
                libserial_baudrate = LibSerial::BaudRate::BAUD_38400;
                break;
            case 57600:
                libserial_baudrate = LibSerial::BaudRate::BAUD_57600;
                break;
            case 115200:
                libserial_baudrate = LibSerial::BaudRate::BAUD_115200;
                break;
            case 230400:
                libserial_baudrate = LibSerial::BaudRate::BAUD_230400;
                break;
            case 460800:
                libserial_baudrate = LibSerial::BaudRate::BAUD_460800;
                break;
            case 921600:
                libserial_baudrate = LibSerial::BaudRate::BAUD_921600;
                break;
            default:
                RCLCPP_WARN(this->get_logger(), "不支持的波特率 %d, 使用默认 115200", baudrate_);
                libserial_baudrate = LibSerial::BaudRate::BAUD_115200;
            }

            // 设置标准的串口参数
            serial_port_.SetBaudRate(libserial_baudrate);                           // 波特率
            serial_port_.SetCharacterSize(LibSerial::CharacterSize::CHAR_SIZE_8);   // 字符大小，8位
            serial_port_.SetParity(LibSerial::Parity::PARITY_NONE);                 // 无校验位
            serial_port_.SetStopBits(LibSerial::StopBits::STOP_BITS_1);             // 1位停止位
            serial_port_.SetFlowControl(LibSerial::FlowControl::FLOW_CONTROL_NONE); // 无流控制

            // 设置超时 (使用VTIME和VMin代替SetTimeout)
            serial_port_.SetVTime(static_cast<int>(timeout_)); // VTIME: 以十分之一秒为单位的时间值
            serial_port_.SetVMin(0);                           // VMin: 最少等待字符数

            RCLCPP_INFO(this->get_logger(), "串口初始化成功");
            return true;
        }

        // 异常处理
        catch (const LibSerial::OpenFailed &e)
        {
            RCLCPP_ERROR(this->get_logger(), "无法打开串口 %s: %s",
                         port_.c_str(), e.what());
            return false;
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "串口初始化错误: %s", e.what());
            return false;
        }
    }

    // 串口读取线程函数
    void USBReaderNode::readSerialThread()
    {
        RCLCPP_INFO(this->get_logger(), "串口读取线程启动");

        std::vector<char> buffer(read_buffer_size_); // 创建固定大小的缓冲区
        static std::vector<uint8_t> mavlink_buffer;  // MAVLink数据缓存

        // 主循环结构
        while (running_ && rclcpp::ok()) // 节点仍然在运行且ROS2系统正常
        {
            if (!is_connected_) // 检查串口连接是否正常，如果未连接，则短暂休眠之后跳过本次循环
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                continue;
            }

            try
            {
                // 检查是否有数据可读
                if (!serial_port_.IsDataAvailable())
                {
                    std::this_thread::sleep_for(std::chrono::milliseconds(10));
                    continue;
                }

                // 线程安全的数据读取
                size_t bytes_read = 0;
                std::string temp_buffer;
                {
                    std::lock_guard<std::mutex> lock(serial_mutex_); // 保护serial_port_的线程安全访问
                    if (!serial_port_.IsOpen())                      // 再次检查串口是否打开
                    {
                        is_connected_ = false;
                        RCLCPP_WARN(this->get_logger(), "串口连接断开");
                        continue;
                    }

                    // 读取操作
                    try
                    {
                        serial_port_.Read(temp_buffer, buffer.size()); // 从串口读取数据
                        bytes_read = temp_buffer.length();             // 记录读取的字节数
                        if (bytes_read > 0)                            // 如果读取到数据
                        {
                            // 将字符串内容复制到字符缓冲区
                            std::copy(temp_buffer.begin(), temp_buffer.end(), buffer.begin());
                        }
                    }
                    catch (const LibSerial::ReadTimeout &) // 捕获读取超时异常
                    {
                        // 超时则进入下一次循环
                        continue;
                    }
                }

                if (bytes_read > 0)
                {
                    bytes_received_ += bytes_read; // 更新统计信息

                    // 处理接收到的数据 - 对于MAVLink二进制协议，直接处理字节数据

                    // 将新接收到的数据添加到MAVLink缓存中
                    mavlink_buffer.insert(mavlink_buffer.end(),
                                          temp_buffer.begin(),
                                          temp_buffer.end());

                    // 解析MAVLink数据包 - 正确处理缓冲区，逐字节解析
                    mavlink_message_t msg;
                    mavlink_status_t status = last_status; // 使用上一次的状态

                    for (size_t i = 0; i < mavlink_buffer.size(); i++)
                    {
                        if (mavlink_parse_char(MAVLINK_COMM_0, mavlink_buffer[i], &msg, &status))
                        {
                            // 成功解析了一个完整的MAVLink消息，直接处理msg结构体
                            processMavlinkMessage(&msg);
                        }
                    }

                    // 更新状态
                    last_status = status;

                    // 保留未完成的消息部分在缓冲区中
                    // 由于mavlink_parse_char会处理字节顺序和消息完整性，
                    // 我们保留整个缓冲区，让解析器处理消息边界
                    
                    if (this->debug_)
                    {
                        RCLCPP_INFO(this->get_logger(), "接收: %zu 字节", bytes_read);
                    }

                    messages_received_++; // 更新消息计数
                }
            }

            // 全局异常处理
            catch (const std::exception &e)
            {
                RCLCPP_ERROR(this->get_logger(), "读取串口数据错误: %s", e.what());
                is_connected_ = false;
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            }
        }

        RCLCPP_INFO(this->get_logger(), "串口读取线程结束");
    }

    // 检查串口连接状态函数(负责检查串口是否已连接，若未连接则尝试重新连接)
    void USBReaderNode::checkConnection()
    {
        // 检查是否出于断连状态且仍然需要运行
        if (!is_connected_ && running_)
        {
            RCLCPP_INFO(this->get_logger(), "尝试重新连接串口...");

            // 检查是否已达到最大重连次数
            if (reconnect_attempts_ < MAX_RECONNECT_ATTEMPTS)
            {
                // 尝试重新初始化串口连接
                if (initSerialPort())
                {
                    // 重新连接成功，更新连接状态
                    is_connected_ = true;
                    reconnect_attempts_ = 0;
                    RCLCPP_INFO(this->get_logger(), "重新连接成功");
                }
                else
                {
                    // 重新连接失败，增加重连次数并输出警告
                    reconnect_attempts_++;
                    RCLCPP_WARN(this->get_logger(), "重新连接失败 (%d/%d)",
                                reconnect_attempts_, MAX_RECONNECT_ATTEMPTS);
                }
            }
            else
            {
                // 达到最大重连次数，停止尝试，并标记停止运行
                RCLCPP_ERROR(this->get_logger(), "达到最大重连次数，停止尝试");
                running_ = false;
            }
        }
    }

    void USBReaderNode::cleanup()
    {
        std::lock_guard<std::mutex> lock(serial_mutex_); // 使用互斥锁保护串口对象的访问，确保在多线程环境中的安全性
        if (serial_port_.IsOpen())
        {
            try
            {
                serial_port_.Close();
                RCLCPP_INFO(this->get_logger(), "串口已关闭");
            }
            catch (const std::exception &e)
            {
                RCLCPP_ERROR(this->get_logger(), "关闭串口时出错: %s", e.what());
            }
        }
        is_connected_ = false;
    }

    void USBReaderNode::sendMotorCmdToSerial(const usb_device_driver::msg::MotorsCmd::SharedPtr msg)
    {
        if (!is_connected_)
        {
            RCLCPP_WARN(this->get_logger(), "串口未连接，无法发送电机命令");
            return;
        }

        // 构造MAVLink消息
        mavlink_message_t mav_msg;
        mavlink_dog_motors_cmd_t dog_motors_cmd;

        // 设置时间戳(当前时间的ns)
        dog_motors_cmd.timestamp = std::chrono::duration_cast<std::chrono::nanoseconds>(
                                       std::chrono::high_resolution_clock::now().time_since_epoch())
                                       .count();

        // 赋值电机命令数据
        for (int i = 0; i < 12; i++)
        {
            dog_motors_cmd.motors_id[i] = static_cast<uint8_t>(msg->motor_ids[i]);
            dog_motors_cmd.target_positions[i] = msg->target_positions[i];
            dog_motors_cmd.target_velocities[i] = msg->target_velocities[i];
            dog_motors_cmd.target_torques[i] = msg->target_torques[i];
            dog_motors_cmd.kp[i] = msg->kp[i];
            dog_motors_cmd.kd[i] = msg->kd[i];
        }

        // 序列化MAVLink消息
        uint16_t len = mavlink_msg_dog_motors_cmd_encode(0, 0, &mav_msg, &dog_motors_cmd);

        try
        {
            std::lock_guard<std::mutex> lock(serial_mutex_); // 使用互斥锁保护串口对象的访问，确保在多线程环境中的安全性
            if (serial_port_.IsOpen())
            {
                std::string data_to_send(reinterpret_cast<const char *>(_MAV_PAYLOAD(&mav_msg)), len);
                serial_port_.Write(data_to_send);
                if (debug_)
                {
                    RCLCPP_INFO(this->get_logger(), "发送电机命令到串口:，长度：%d", len);
                }
            }
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "发送电机命令到串口时出错: %s", e.what());
        }
    }

    void USBReaderNode::handleReceivedMavlinkData(const uint8_t *data, size_t len)
    {
        // 解析MAVLink消息
        mavlink_message_t msg;
        mavlink_status_t status;

        for (size_t i = 0; i < len; i++)
        {
            if (mavlink_parse_char(MAVLINK_COMM_0, data[i], &msg, &status))
            {
                // 处理解析到的MAVLink消息
                switch (msg.msgid)
                {
                case MAVLINK_MSG_ID_DOG_MOTORS_STATE:
                {
                    // 解析电机状态消息
                    mavlink_dog_motors_state_t dog_motors_state;
                    mavlink_msg_dog_motors_state_decode(&msg, &dog_motors_state);

                    // 创建并发布ROS2电机状态消息
                    auto motor_state_msg = usb_device_driver::msg::MotorsStates();

                    // 设置时间戳
                    auto now = this->get_clock()->now();
                    motor_state_msg.timestamp.sec = now.seconds();
                    motor_state_msg.timestamp.nanosec = now.nanoseconds() % 1000000000UL;

                    // 赋值数据
                    for (int j = 0; j < 12; j++)
                    {
                        motor_state_msg.motor_ids[j] = static_cast<float>(dog_motors_state.motors_id[j]);
                        motor_state_msg.positions[j] = dog_motors_state.positions[j];
                        motor_state_msg.velocities[j] = dog_motors_state.velocities[j];
                        motor_state_msg.torques[j] = dog_motors_state.torques[j];
                        motor_state_msg.currents[j] = dog_motors_state.currents[j];
                        motor_state_msg.temperatures[j] = dog_motors_state.temperatures[j];
                        motor_state_msg.statuses[j] = dog_motors_state.statuses[j];
                    }

                    // 发布ROS2电机状态消息
                    motor_states_pub_->publish(motor_state_msg);

                    if (this->debug_)
                    {
                        RCLCPP_INFO(this->get_logger(), "发布电机状态消息到ROS2:，长度：%zu", len);
                    }
                    break;
                }
                case MAVLINK_MSG_ID_DOG_IMU_DATA:
                {
                    // 解析IMU数据消息
                    mavlink_dog_imu_data_t dog_imu_data;
                    mavlink_msg_dog_imu_data_decode(&msg, &dog_imu_data);

                    // 创建并发布ROS2 IMU数据消息
                    auto imu_data_msg = usb_device_driver::msg::IMUData();

                    // 设置时间戳
                    auto now = this->get_clock()->now();
                    imu_data_msg.timestamp.sec = now.seconds();
                    imu_data_msg.timestamp.nanosec = now.nanoseconds() % 1000000000UL;

                    // 设置四元数 (从MAVLink结构体获取对应字段)
                    imu_data_msg.orientation.w = dog_imu_data.qw;
                    imu_data_msg.orientation.x = dog_imu_data.qx;
                    imu_data_msg.orientation.y = dog_imu_data.qy;
                    imu_data_msg.orientation.z = dog_imu_data.qz;

                    // 设置角速度
                    imu_data_msg.angular_velocity.x = dog_imu_data.gx;
                    imu_data_msg.angular_velocity.y = dog_imu_data.gy;
                    imu_data_msg.angular_velocity.z = dog_imu_data.gz;

                    // 设置线性加速度
                    imu_data_msg.linear_acceleration.x = dog_imu_data.ax;
                    imu_data_msg.linear_acceleration.y = dog_imu_data.ay;
                    imu_data_msg.linear_acceleration.z = dog_imu_data.az;

                    // 发布ROS2 IMU数据消息
                    imu_states_pub_->publish(imu_data_msg);

                    if (debug_)
                    {
                        RCLCPP_INFO(this->get_logger(), "发布IMU数据消息到ROS2:，长度：%zu", len);
                    }
                    break;
                }
                default:
                    RCLCPP_WARN(this->get_logger(), "未知的消息ID:%d", msg.msgid);
                    break;
                }
            }
        }
    }

    void USBReaderNode::processMavlinkMessage(const mavlink_message_t *msg)
    {
        // 处理解析完成的MAVLink消息
        switch (msg->msgid)
        {
        case MAVLINK_MSG_ID_DOG_MOTORS_STATE:
        {
            // 解析电机状态消息
            mavlink_dog_motors_state_t dog_motors_state;
            mavlink_msg_dog_motors_state_decode(msg, &dog_motors_state);

            // 创建并发布ROS2电机状态消息
            auto motor_state_msg = usb_device_driver::msg::MotorsStates();

            // 设置时间戳
            auto now = this->get_clock()->now();
            motor_state_msg.timestamp.sec = now.seconds();
            motor_state_msg.timestamp.nanosec = now.nanoseconds() % 1000000000UL;

            // 赋值数据
            for (int j = 0; j < 12; j++)
            {
                motor_state_msg.motor_ids[j] = static_cast<float>(dog_motors_state.motors_id[j]);
                motor_state_msg.positions[j] = dog_motors_state.positions[j];
                motor_state_msg.velocities[j] = dog_motors_state.velocities[j];
                motor_state_msg.torques[j] = dog_motors_state.torques[j];
                motor_state_msg.currents[j] = dog_motors_state.currents[j];
                motor_state_msg.temperatures[j] = dog_motors_state.temperatures[j];
                motor_state_msg.statuses[j] = dog_motors_state.statuses[j];
            }

            // 发布ROS2电机状态消息
            motor_states_pub_->publish(motor_state_msg);

            if (this->debug_)
            {
                RCLCPP_INFO(this->get_logger(), "发布电机状态消息到ROS2");
            }
            break;
        }
        case MAVLINK_MSG_ID_DOG_IMU_DATA:
        {
            // 解析IMU数据消息
            mavlink_dog_imu_data_t dog_imu_data;
            mavlink_msg_dog_imu_data_decode(msg, &dog_imu_data);

            // 创建并发布ROS2 IMU数据消息
            auto imu_data_msg = usb_device_driver::msg::IMUData();

            // 设置时间戳
            auto now = this->get_clock()->now();
            imu_data_msg.timestamp.sec = now.seconds();
            imu_data_msg.timestamp.nanosec = now.nanoseconds() % 1000000000UL;

            // 设置四元数 (从MAVLink结构体获取对应字段)
            imu_data_msg.orientation.w = dog_imu_data.qw;
            imu_data_msg.orientation.x = dog_imu_data.qx;
            imu_data_msg.orientation.y = dog_imu_data.qy;
            imu_data_msg.orientation.z = dog_imu_data.qz;

            // 设置角速度
            imu_data_msg.angular_velocity.x = dog_imu_data.gx;
            imu_data_msg.angular_velocity.y = dog_imu_data.gy;
            imu_data_msg.angular_velocity.z = dog_imu_data.gz;

            // 设置线性加速度
            imu_data_msg.linear_acceleration.x = dog_imu_data.ax;
            imu_data_msg.linear_acceleration.y = dog_imu_data.ay;
            imu_data_msg.linear_acceleration.z = dog_imu_data.az;

            // 发布ROS2 IMU数据消息
            imu_states_pub_->publish(imu_data_msg);

            if (this->debug_)
            {
                RCLCPP_INFO(this->get_logger(), "发布IMU数据消息到ROS2");
            }
            break;
        }
        default:
            RCLCPP_WARN(this->get_logger(), "未知的消息ID:%d", msg->msgid);
            break;
        }
    }

} // namespace usb_device_driver