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
