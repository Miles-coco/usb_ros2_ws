// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__STRUCT_H_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__STRUCT_H_

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

/// Struct defined in msg/MotorsCmd in the package usb_device_driver.
/**
  * 电机命令
 */
typedef struct usb_device_driver__msg__MotorsCmd
{
  /// 时间戳
  builtin_interfaces__msg__Time timestamp;
  /// 电机ID
  uint8_t motor_ids[12];
  /// 目标位置
  float target_positions[12];
  /// 目标速度
  float target_velocities[12];
  /// 目标扭矩
  float target_torques[12];
  /// P系数
  float kp[12];
  /// D系数
  float kd[12];
} usb_device_driver__msg__MotorsCmd;

// Struct for a sequence of usb_device_driver__msg__MotorsCmd.
typedef struct usb_device_driver__msg__MotorsCmd__Sequence
{
  usb_device_driver__msg__MotorsCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usb_device_driver__msg__MotorsCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_CMD__STRUCT_H_
