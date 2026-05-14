// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__BUILDER_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "usb_device_driver/msg/detail/motors_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace usb_device_driver
{

namespace msg
{

namespace builder
{

class Init_MotorsCmd_kd
{
public:
  explicit Init_MotorsCmd_kd(::usb_device_driver::msg::MotorsCmd & msg)
  : msg_(msg)
  {}
  ::usb_device_driver::msg::MotorsCmd kd(::usb_device_driver::msg::MotorsCmd::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsCmd msg_;
};

class Init_MotorsCmd_kp
{
public:
  explicit Init_MotorsCmd_kp(::usb_device_driver::msg::MotorsCmd & msg)
  : msg_(msg)
  {}
  Init_MotorsCmd_kd kp(::usb_device_driver::msg::MotorsCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorsCmd_kd(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsCmd msg_;
};

class Init_MotorsCmd_target_torques
{
public:
  explicit Init_MotorsCmd_target_torques(::usb_device_driver::msg::MotorsCmd & msg)
  : msg_(msg)
  {}
  Init_MotorsCmd_kp target_torques(::usb_device_driver::msg::MotorsCmd::_target_torques_type arg)
  {
    msg_.target_torques = std::move(arg);
    return Init_MotorsCmd_kp(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsCmd msg_;
};

class Init_MotorsCmd_target_velocities
{
public:
  explicit Init_MotorsCmd_target_velocities(::usb_device_driver::msg::MotorsCmd & msg)
  : msg_(msg)
  {}
  Init_MotorsCmd_target_torques target_velocities(::usb_device_driver::msg::MotorsCmd::_target_velocities_type arg)
  {
    msg_.target_velocities = std::move(arg);
    return Init_MotorsCmd_target_torques(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsCmd msg_;
};

class Init_MotorsCmd_target_positions
{
public:
  explicit Init_MotorsCmd_target_positions(::usb_device_driver::msg::MotorsCmd & msg)
  : msg_(msg)
  {}
  Init_MotorsCmd_target_velocities target_positions(::usb_device_driver::msg::MotorsCmd::_target_positions_type arg)
  {
    msg_.target_positions = std::move(arg);
    return Init_MotorsCmd_target_velocities(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsCmd msg_;
};

class Init_MotorsCmd_motor_ids
{
public:
  explicit Init_MotorsCmd_motor_ids(::usb_device_driver::msg::MotorsCmd & msg)
  : msg_(msg)
  {}
  Init_MotorsCmd_target_positions motor_ids(::usb_device_driver::msg::MotorsCmd::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return Init_MotorsCmd_target_positions(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsCmd msg_;
};

class Init_MotorsCmd_timestamp
{
public:
  Init_MotorsCmd_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorsCmd_motor_ids timestamp(::usb_device_driver::msg::MotorsCmd::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MotorsCmd_motor_ids(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usb_device_driver::msg::MotorsCmd>()
{
  return usb_device_driver::msg::builder::Init_MotorsCmd_timestamp();
}

}  // namespace usb_device_driver

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__BUILDER_HPP_
