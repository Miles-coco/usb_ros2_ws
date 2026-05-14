// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usb_device_driver:msg/IMUData.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__STRUCT_H_
#define USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/IMUData in the package usb_device_driver.
/**
  * IMU数据
 */
typedef struct usb_device_driver__msg__IMUData
{
  /// 时间戳
  builtin_interfaces__msg__Time timestamp;
  /// 四元数
  geometry_msgs__msg__Quaternion orientation;
  /// 角速度
  geometry_msgs__msg__Vector3 angular_velocity;
  /// 加速度
  geometry_msgs__msg__Vector3 linear_acceleration;
} usb_device_driver__msg__IMUData;

// Struct for a sequence of usb_device_driver__msg__IMUData.
typedef struct usb_device_driver__msg__IMUData__Sequence
{
  usb_device_driver__msg__IMUData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usb_device_driver__msg__IMUData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__IMU_DATA__STRUCT_H_
