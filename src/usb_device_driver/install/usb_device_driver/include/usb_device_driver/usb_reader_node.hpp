#ifndef USB_READER_NODE_HPP_
#define USB_READER_NODE_HPP_

#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <libserial/SerialPort.h>
#include <thread>
#include <atomic>
#include <memory>
#include <string>
#include <vector>
#include <mutex>
#include <chrono>
#include "usb_device_driver/msg/imu_data.hpp"
#include "usb_device_driver/msg/motors_cmd.hpp"
#include "usb_device_driver/msg/motors_states.hpp"
#include "mavlink/v2.0/robot_dog/mavlink.h"

namespace usb_device_driver
{

class USBReaderNode : public rclcpp::Node
{
public:
  // 使用显式构造函数
  explicit USBReaderNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()); // explicit,防止隐式类型转换
  virtual ~USBReaderNode(); // 虚析构函数，确保子类可以调用并重写析构函数

private:
  // 初始化参数
  void initParameters();
  
  // 初始化串口
  bool initSerialPort();
  
  // 自动检测串口设备
  std::string autoDetectDevice();
  
  // 读取线程函数
  void readSerialThread();
  
  // 清理资源
  void cleanup();
  
  // 串口对象
  LibSerial::SerialPort serial_port_;
  
  // 线程控制
  std::thread read_thread_;
  std::atomic<bool> running_{false};
  std::atomic<bool> is_connected_{false};
  
  // 互斥锁
  std::mutex serial_mutex_;
  
  // 发布者
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr raw_data_pub_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr velocity_pub_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr parsed_data_pub_;
  
  // 新增发布者
  rclcpp::Publisher<usb_device_driver::msg::MotorsStates>::SharedPtr motor_states_pub_;
  rclcpp::Publisher<usb_device_driver::msg::IMUData>::SharedPtr imu_states_pub_;

  // 订阅者
  rclcpp::Subscription<usb_device_driver::msg::MotorsCmd>::SharedPtr motor_cmd_sub_;

  // 串口处理函数
  void sendMotorCmdToSerial(const usb_device_driver::msg::MotorsCmd::SharedPtr msg);
  void handleReceivedMavlinkData(const uint8_t* buffer, size_t len);
  void processMavlinkMessage(const mavlink_message_t* msg);

  // 参数
  std::string port_;
  int baudrate_;
  double timeout_;
  bool debug_;
  int read_buffer_size_;
  
  // 定时器
  rclcpp::TimerBase::SharedPtr connection_timer_;
  void checkConnection();
  
  // 统计
  size_t bytes_received_{0};
  size_t messages_received_{0};
  
  // 重新连接尝试
  int reconnect_attempts_{0};
  static constexpr int MAX_RECONNECT_ATTEMPTS = 10;
  
  // MAVLink解析状态
  mavlink_status_t last_status{};
};

}  // namespace usb_device_driver

#endif  // USB_READER_NODE_HPP_