#include "usb_device_driver/usb_reader_node.hpp"
#include <rclcpp/rclcpp.hpp>
#include <memory>

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<usb_device_driver::USBReaderNode>(); // 模板参数:<命名空间::类名>
  
  RCLCPP_INFO(node->get_logger(), "启动 USB Reader 节点...");
  
  rclcpp::spin(node);
  rclcpp::shutdown();
  
  return 0;
}