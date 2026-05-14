// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "usb_device_driver/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "usb_device_driver/msg/detail/motors_cmd__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace usb_device_driver
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_device_driver
cdr_serialize(
  const usb_device_driver::msg::MotorsCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_device_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  usb_device_driver::msg::MotorsCmd & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_device_driver
get_serialized_size(
  const usb_device_driver::msg::MotorsCmd & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_device_driver
max_serialized_size_MotorsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace usb_device_driver

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_usb_device_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, usb_device_driver, msg, MotorsCmd)();

#ifdef __cplusplus
}
#endif

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
