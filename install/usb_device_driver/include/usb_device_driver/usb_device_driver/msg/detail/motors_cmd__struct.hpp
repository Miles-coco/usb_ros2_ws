// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__STRUCT_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usb_device_driver__msg__MotorsCmd __attribute__((deprecated))
#else
# define DEPRECATED__usb_device_driver__msg__MotorsCmd __declspec(deprecated)
#endif

namespace usb_device_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorsCmd_
{
  using Type = MotorsCmd_<ContainerAllocator>;

  explicit MotorsCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->motor_ids.begin(), this->motor_ids.end(), 0);
      std::fill<typename std::array<float, 12>::iterator, float>(this->target_positions.begin(), this->target_positions.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->target_velocities.begin(), this->target_velocities.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->target_torques.begin(), this->target_torques.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kp.begin(), this->kp.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kd.begin(), this->kd.end(), 0.0f);
    }
  }

  explicit MotorsCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    motor_ids(_alloc),
    target_positions(_alloc),
    target_velocities(_alloc),
    target_torques(_alloc),
    kp(_alloc),
    kd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->motor_ids.begin(), this->motor_ids.end(), 0);
      std::fill<typename std::array<float, 12>::iterator, float>(this->target_positions.begin(), this->target_positions.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->target_velocities.begin(), this->target_velocities.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->target_torques.begin(), this->target_torques.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kp.begin(), this->kp.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kd.begin(), this->kd.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _motor_ids_type =
    std::array<uint8_t, 12>;
  _motor_ids_type motor_ids;
  using _target_positions_type =
    std::array<float, 12>;
  _target_positions_type target_positions;
  using _target_velocities_type =
    std::array<float, 12>;
  _target_velocities_type target_velocities;
  using _target_torques_type =
    std::array<float, 12>;
  _target_torques_type target_torques;
  using _kp_type =
    std::array<float, 12>;
  _kp_type kp;
  using _kd_type =
    std::array<float, 12>;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__motor_ids(
    const std::array<uint8_t, 12> & _arg)
  {
    this->motor_ids = _arg;
    return *this;
  }
  Type & set__target_positions(
    const std::array<float, 12> & _arg)
  {
    this->target_positions = _arg;
    return *this;
  }
  Type & set__target_velocities(
    const std::array<float, 12> & _arg)
  {
    this->target_velocities = _arg;
    return *this;
  }
  Type & set__target_torques(
    const std::array<float, 12> & _arg)
  {
    this->target_torques = _arg;
    return *this;
  }
  Type & set__kp(
    const std::array<float, 12> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::array<float, 12> & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usb_device_driver::msg::MotorsCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const usb_device_driver::msg::MotorsCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usb_device_driver::msg::MotorsCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usb_device_driver::msg::MotorsCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usb_device_driver__msg__MotorsCmd
    std::shared_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usb_device_driver__msg__MotorsCmd
    std::shared_ptr<usb_device_driver::msg::MotorsCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorsCmd_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->motor_ids != other.motor_ids) {
      return false;
    }
    if (this->target_positions != other.target_positions) {
      return false;
    }
    if (this->target_velocities != other.target_velocities) {
      return false;
    }
    if (this->target_torques != other.target_torques) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorsCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorsCmd_

// alias to use template instance with default allocator
using MotorsCmd =
  usb_device_driver::msg::MotorsCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usb_device_driver

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__STRUCT_HPP_
