// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from usb_device_driver:msg/IMUData.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "usb_device_driver/msg/detail/imu_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace usb_device_driver
{

namespace msg
{

namespace builder
{

class Init_IMUData_linear_acceleration
{
public:
  explicit Init_IMUData_linear_acceleration(::usb_device_driver::msg::IMUData & msg)
  : msg_(msg)
  {}
  ::usb_device_driver::msg::IMUData linear_acceleration(::usb_device_driver::msg::IMUData::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::usb_device_driver::msg::IMUData msg_;
};

class Init_IMUData_angular_velocity
{
public:
  explicit Init_IMUData_angular_velocity(::usb_device_driver::msg::IMUData & msg)
  : msg_(msg)
  {}
  Init_IMUData_linear_acceleration angular_velocity(::usb_device_driver::msg::IMUData::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_IMUData_linear_acceleration(msg_);
  }

private:
  ::usb_device_driver::msg::IMUData msg_;
};

class Init_IMUData_orientation
{
public:
  explicit Init_IMUData_orientation(::usb_device_driver::msg::IMUData & msg)
  : msg_(msg)
  {}
  Init_IMUData_angular_velocity orientation(::usb_device_driver::msg::IMUData::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_IMUData_angular_velocity(msg_);
  }

private:
  ::usb_device_driver::msg::IMUData msg_;
};

class Init_IMUData_timestamp
{
public:
  Init_IMUData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUData_orientation timestamp(::usb_device_driver::msg::IMUData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_IMUData_orientation(msg_);
  }

private:
  ::usb_device_driver::msg::IMUData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::usb_device_driver::msg::IMUData>()
{
  return usb_device_driver::msg::builder::Init_IMUData_timestamp();
}

}  // namespace usb_device_driver

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__BUILDER_HPP_
