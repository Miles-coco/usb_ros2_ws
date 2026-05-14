// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usb_device_driver:msg/MotorsStates.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__BUILDER_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "usb_device_driver/msg/detail/motors_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace usb_device_driver
{

namespace msg
{

namespace builder
{

class Init_MotorsStates_statuses
{
public:
  explicit Init_MotorsStates_statuses(::usb_device_driver::msg::MotorsStates & msg)
  : msg_(msg)
  {}
  ::usb_device_driver::msg::MotorsStates statuses(::usb_device_driver::msg::MotorsStates::_statuses_type arg)
  {
    msg_.statuses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

class Init_MotorsStates_temperatures
{
public:
  explicit Init_MotorsStates_temperatures(::usb_device_driver::msg::MotorsStates & msg)
  : msg_(msg)
  {}
  Init_MotorsStates_statuses temperatures(::usb_device_driver::msg::MotorsStates::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return Init_MotorsStates_statuses(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

class Init_MotorsStates_torques
{
public:
  explicit Init_MotorsStates_torques(::usb_device_driver::msg::MotorsStates & msg)
  : msg_(msg)
  {}
  Init_MotorsStates_temperatures torques(::usb_device_driver::msg::MotorsStates::_torques_type arg)
  {
    msg_.torques = std::move(arg);
    return Init_MotorsStates_temperatures(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

class Init_MotorsStates_currents
{
public:
  explicit Init_MotorsStates_currents(::usb_device_driver::msg::MotorsStates & msg)
  : msg_(msg)
  {}
  Init_MotorsStates_torques currents(::usb_device_driver::msg::MotorsStates::_currents_type arg)
  {
    msg_.currents = std::move(arg);
    return Init_MotorsStates_torques(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

class Init_MotorsStates_velocities
{
public:
  explicit Init_MotorsStates_velocities(::usb_device_driver::msg::MotorsStates & msg)
  : msg_(msg)
  {}
  Init_MotorsStates_currents velocities(::usb_device_driver::msg::MotorsStates::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return Init_MotorsStates_currents(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

class Init_MotorsStates_positions
{
public:
  explicit Init_MotorsStates_positions(::usb_device_driver::msg::MotorsStates & msg)
  : msg_(msg)
  {}
  Init_MotorsStates_velocities positions(::usb_device_driver::msg::MotorsStates::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_MotorsStates_velocities(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

class Init_MotorsStates_motor_ids
{
public:
  explicit Init_MotorsStates_motor_ids(::usb_device_driver::msg::MotorsStates & msg)
  : msg_(msg)
  {}
  Init_MotorsStates_positions motor_ids(::usb_device_driver::msg::MotorsStates::_motor_ids_type arg)
  {
    msg_.motor_ids = std::move(arg);
    return Init_MotorsStates_positions(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

class Init_MotorsStates_timestamp
{
public:
  Init_MotorsStates_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorsStates_motor_ids timestamp(::usb_device_driver::msg::MotorsStates::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MotorsStates_motor_ids(msg_);
  }

private:
  ::usb_device_driver::msg::MotorsStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usb_device_driver::msg::MotorsStates>()
{
  return usb_device_driver::msg::builder::Init_MotorsStates_timestamp();
}

}  // namespace usb_device_driver

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__BUILDER_HPP_
