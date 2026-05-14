// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from usb_device_driver:msg/IMUData.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__STRUCT_HPP_
#define USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__STRUCT_HPP_

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
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__usb_device_driver__msg__IMUData __attribute__((deprecated))
#else
# define DEPRECATED__usb_device_driver__msg__IMUData __declspec(deprecated)
#endif

namespace usb_device_driver
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMUData_
{
  using Type = IMUData_<ContainerAllocator>;

  explicit IMUData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    orientation(_init),
    angular_velocity(_init),
    linear_acceleration(_init)
  {
    (void)_init;
  }

  explicit IMUData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    orientation(_alloc, _init),
    angular_velocity(_alloc, _init),
    linear_acceleration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _angular_velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _linear_acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    usb_device_driver::msg::IMUData_<ContainerAllocator> *;
  using ConstRawPtr =
    const usb_device_driver::msg::IMUData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      usb_device_driver::msg::IMUData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      usb_device_driver::msg::IMUData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__usb_device_driver__msg__IMUData
    std::shared_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__usb_device_driver__msg__IMUData
    std::shared_ptr<usb_device_driver::msg::IMUData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUData_

// alias to use template instance with default allocator
using IMUData =
  usb_device_driver::msg::IMUData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace usb_device_driver

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__STRUCT_HPP_
