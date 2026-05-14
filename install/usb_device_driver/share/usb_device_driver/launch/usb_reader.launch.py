from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'port',
            default_value='/dev/ttyACM0',
            description='USB设备端口'
        ),
        DeclareLaunchArgument(
            'baudrate',
            default_value='115200',
            description='串口波特率'
        ),
        DeclareLaunchArgument(
            'timeout',
            default_value='1.0',
            description='超时时间(秒)'
        ),
        DeclareLaunchArgument(
            'debug',
            default_value='false',
            description='启用调试输出'
        ),
        
        Node(
            package='usb_device_driver',
            executable='usb_reader_node',
            name='usb_reader',
            output='screen',
            parameters=[{
                'port': LaunchConfiguration('port'),
                'baudrate': LaunchConfiguration('baudrate'),
                'timeout': LaunchConfiguration('timeout'),
                'debug': LaunchConfiguration('debug')
            }]
        )
    ])