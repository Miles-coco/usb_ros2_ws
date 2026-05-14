# USB Device Driver for ROS2

一个用于在ROS2环境中读取USB串口设备数据的C++驱动程序包。

## 功能特性

- **实时数据读取**：通过USB串口实时读取设备数据
- **多格式解析**：支持JSON、CSV和空格分隔格式的数据解析
- **自动设备检测**：自动发现可用的USB串口设备
- **连接管理**：监控连接状态并支持自动重连
- **多话题发布**：发布原始数据、解析数据和速度消息

## 依赖项

- ROS2 Humble Hawksbill 或更高版本
- `libserial-dev` - 串口通信库
- ROS2标准库（rclcpp, std_msgs, geometry_msgs）

### 安装依赖

```bash
sudo apt-get update
sudo apt-get install libserial-dev
pip3 install pymavlink # mavlink通信协议转换库
```

## 构建

```bash
cd ~/usb_ros2_ws
colcon build --packages-select usb_device_driver
source install/setup.bash
```

## 运行

### 方式1：直接运行

```bash
ros2 run usb_device_driver usb_reader_node
```

### 方式2：使用启动文件

```bash
ros2 launch usb_device_driver usb_reader.launch.py
```

### 方式3：自定义参数

```bash
ros2 launch usb_device_driver usb_reader.launch.py port:=/dev/ttyUSB0 baudrate:=9600
```

## 参数配置

| 参数名 | 类型 | 默认值 | 描述 |
|--------|------|--------|------|
| port | string | "/dev/ttyACM0" | 串口设备路径 |
| baudrate | int | 115200 | 波特率 |
| timeout | double | 1.0 | 读取超时时间（秒） |
| debug | bool | false | 是否启用调试输出 |
| read_buffer_size | int | 1024 | 读取缓冲区大小 |
| auto_detect | bool | true | 是否自动检测设备 |

## 发布的话题

- `/usb/raw_data` (std_msgs/String) - 原始串口数据
- `/usb/parsed_data` (std_msgs/String) - 解析后的数据
- `/usb/velocity` (geometry_msgs/Twist) - 解析的速度数据

## 配置文件

默认配置位于 `config/usb_reader.yaml`，可以根据需要修改参数。

## 机器人配置 (robot_dog.xml)

`robot_dog.xml` 是一个 MAVLink 协议定义文件，用于机器人狗的通信协议。该文件定义了三种主要的消息类型：

- **DOG_MOTORS_CMD (ID: 230)**: 12个电机的控制指令消息
  - 包含目标位置、速度、力矩及PID参数
  - 用于向机器人发送运动控制命令

- **DOG_MOTORS_STATE (ID: 231)**: 12个电机的状态反馈消息
  - 包含当前位置、速度、力矩、电流、温度等信息
  - 用于接收机器人的状态反馈

- **DOG_IMU_DATA (ID: 232)**: IMU传感器数据消息
  - 包含姿态四元数、加速度和角速度信息
  - 用于获取机器人的姿态和运动状态

### 使用方法

1. 将 `robot_dog.xml` 文件放置在您的 MAVLink 库能够识别的目录中
2. 使用 MAVLink 工具链生成对应语言的代码绑定
3. 在您的应用程序中使用这些消息类型与机器人进行通信

该文件遵循 MAVLink 2.0 协议规范，支持安全的双向通信。

需要自己处理一下路径，本命令是将通信协议转换成c++库，如果想转换成c库以及别的库可以上mavlink官网查找命令。

```bash
python3 /home/miles/.local/bin/mavgen.py   --lang=C++11   --wire-protocol=2.0   --output=generated/include/mavlink/v2.0   message_definitions/v2.0/robot_dog.xml
```



## 故障排除

1. **权限错误**：确保用户有访问串口设备的权限
   ```bash
   sudo usermod -a -G dialout $USER
   # 注销并重新登录
   ```

2. **找不到设备**：确认设备已连接且路径正确
   ```bash
   ls /dev/tty{ACM,USB}*
   ```

3. **编译错误**：确保已安装libserial-dev
   ```bash
   sudo apt-get install libserial-dev
   ```

## 开发

此包使用C++编写，遵循ROS2最佳实践。主要组件包括：
- `USBReaderNode` - 核心节点类，处理串口通信
- 多线程设计，确保UI响应性
- 异常处理和错误恢复机制

## 许可证

Apache-2.0 License