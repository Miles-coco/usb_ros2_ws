// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from usb_device_driver:msg/MotorsStates.idl
// generated code does not contain a copyright notice

#ifndef USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__STRUCT_H_
#define USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__STRUCT_H_

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

/// Struct defined in msg/MotorsStates in the package usb_device_driver.
/**
  * 电机状态
 */
typedef struct usb_device_driver__msg__MotorsStates
{
  /// 时间戳
  builtin_interfaces__msg__Time timestamp;
  /// 电机ID列表
  uint8_t motor_ids[12];
  /// 位置
  float positions[12];
  /// 速度
  float velocities[12];
  /// 电流
  float currents[12];
  /// 扭矩
  float torques[12];
  /// 温度
  float temperatures[12];
  /// 状态
  uint8_t statuses[12];
} usb_device_driver__msg__MotorsStates;

// Struct for a sequence of usb_device_driver__msg__MotorsStates.
typedef struct usb_device_driver__msg__MotorsStates__Sequence
{
  usb_device_driver__msg__MotorsStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} usb_device_driver__msg__MotorsStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // USB_DEVICE_DRIVER__MSG__DETAIL__MOTORS_STATES__STRUCT_H_
