// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usb_device_driver:msg/MotorsStates.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__STRUCT_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__STRUCT_HPP_

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
# define DEPRECATED__usb_device_driver__msg__MotorsStates __attribute__((deprecated))
#else
# define DEPRECATED__usb_device_driver__msg__MotorsStates __declspec(deprecated)
#endif

namespace usb_device_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorsStates_
{
  using Type = MotorsStates_<ContainerAllocator>;

  explicit MotorsStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->motor_ids.begin(), this->motor_ids.end(), 0);
      std::fill<typename std::array<float, 12>::iterator, float>(this->positions.begin(), this->positions.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->velocities.begin(), this->velocities.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->currents.begin(), this->currents.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->torques.begin(), this->torques.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->temperatures.begin(), this->temperatures.end(), 0.0f);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->statuses.begin(), this->statuses.end(), 0);
    }
  }

  explicit MotorsStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    motor_ids(_alloc),
    positions(_alloc),
    velocities(_alloc),
    currents(_alloc),
    torques(_alloc),
    temperatures(_alloc),
    statuses(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->motor_ids.begin(), this->motor_ids.end(), 0);
      std::fill<typename std::array<float, 12>::iterator, float>(this->positions.begin(), this->positions.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->velocities.begin(), this->velocities.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->currents.begin(), this->currents.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->torques.begin(), this->torques.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->temperatures.begin(), this->temperatures.end(), 0.0f);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->statuses.begin(), this->statuses.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _motor_ids_type =
    std::array<uint8_t, 12>;
  _motor_ids_type motor_ids;
  using _positions_type =
    std::array<float, 12>;
  _positions_type positions;
  using _velocities_type =
    std::array<float, 12>;
  _velocities_type velocities;
  using _currents_type =
    std::array<float, 12>;
  _currents_type currents;
  using _torques_type =
    std::array<float, 12>;
  _torques_type torques;
  using _temperatures_type =
    std::array<float, 12>;
  _temperatures_type temperatures;
  using _statuses_type =
    std::array<uint8_t, 12>;
  _statuses_type statuses;

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
  Type & set__positions(
    const std::array<float, 12> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::array<float, 12> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }
  Type & set__currents(
    const std::array<float, 12> & _arg)
  {
    this->currents = _arg;
    return *this;
  }
  Type & set__torques(
    const std::array<float, 12> & _arg)
  {
    this->torques = _arg;
    return *this;
  }
  Type & set__temperatures(
    const std::array<float, 12> & _arg)
  {
    this->temperatures = _arg;
    return *this;
  }
  Type & set__statuses(
    const std::array<uint8_t, 12> & _arg)
  {
    this->statuses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usb_device_driver::msg::MotorsStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const usb_device_driver::msg::MotorsStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usb_device_driver::msg::MotorsStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usb_device_driver::msg::MotorsStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usb_device_driver__msg__MotorsStates
    std::shared_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usb_device_driver__msg__MotorsStates
    std::shared_ptr<usb_device_driver::msg::MotorsStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorsStates_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->motor_ids != other.motor_ids) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    if (this->currents != other.currents) {
      return false;
    }
    if (this->torques != other.torques) {
      return false;
    }
    if (this->temperatures != other.temperatures) {
      return false;
    }
    if (this->statuses != other.statuses) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorsStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorsStates_

// alias to use template instance with default allocator
using MotorsStates =
  usb_device_driver::msg::MotorsStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usb_device_driver

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__STRUCT_HPP_
