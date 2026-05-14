// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usb_device_driver/msg/detail/motors_cmd__rosidl_typesupport_introspection_c.h"
#include "usb_device_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usb_device_driver/msg/detail/motors_cmd__functions.h"
#include "usb_device_driver/msg/detail/motors_cmd__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usb_device_driver__msg__MotorsCmd__init(message_memory);
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_fini_function(void * message_memory)
{
  usb_device_driver__msg__MotorsCmd__fini(message_memory);
}

size_t usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__motor_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__motor_ids(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__motor_ids(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__motor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__motor_ids(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__motor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__motor_ids(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__target_positions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_positions(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_positions(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__target_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__target_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__target_velocities(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_velocities(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_velocities(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__target_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__target_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__target_torques(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_torques(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_torques(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__target_torques(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_torques(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__target_torques(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_torques(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__kp(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__kp(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__kp(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__kp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__kp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__kd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__kd(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__kd(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__kd(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__kd(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsCmd, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsCmd, motor_ids),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__motor_ids,  // size() function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__motor_ids,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__motor_ids,  // get(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__motor_ids,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__motor_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsCmd, target_positions),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__target_positions,  // size() function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_positions,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_positions,  // get(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__target_positions,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__target_positions,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsCmd, target_velocities),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__target_velocities,  // size() function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_velocities,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_velocities,  // get(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__target_velocities,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__target_velocities,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_torques",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsCmd, target_torques),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__target_torques,  // size() function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__target_torques,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__target_torques,  // get(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__target_torques,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__target_torques,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsCmd, kp),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__kp,  // size() function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__kp,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__kp,  // get(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__kp,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__kp,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsCmd, kd),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__size_function__MotorsCmd__kd,  // size() function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_const_function__MotorsCmd__kd,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__get_function__MotorsCmd__kd,  // get(index) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__fetch_function__MotorsCmd__kd,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__assign_function__MotorsCmd__kd,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_members = {
  "usb_device_driver__msg",  // message namespace
  "MotorsCmd",  // message name
  7,  // number of fields
  sizeof(usb_device_driver__msg__MotorsCmd),
  usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_member_array,  // message members
  usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_type_support_handle = {
  0,
  &usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usb_device_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usb_device_driver, msg, MotorsCmd)() {
  usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_type_support_handle.typesupport_identifier) {
    usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &usb_device_driver__msg__MotorsCmd__rosidl_typesupport_introspection_c__MotorsCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
