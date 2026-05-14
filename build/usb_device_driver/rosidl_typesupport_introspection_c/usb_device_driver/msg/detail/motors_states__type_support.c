// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usb_device_driver:msg/MotorsStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usb_device_driver/msg/detail/motors_states__rosidl_typesupport_introspection_c.h"
#include "usb_device_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usb_device_driver/msg/detail/motors_states__functions.h"
#include "usb_device_driver/msg/detail/motors_states__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usb_device_driver__msg__MotorsStates__init(message_memory);
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_fini_function(void * message_memory)
{
  usb_device_driver__msg__MotorsStates__fini(message_memory);
}

size_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__motor_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__motor_ids(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__motor_ids(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__motor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__motor_ids(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__motor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__motor_ids(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__positions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__positions(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__positions(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__velocities(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__velocities(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__velocities(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__currents(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__currents(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__currents(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__currents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__currents(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__currents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__currents(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__torques(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__torques(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__torques(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__torques(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__torques(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__torques(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__torques(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__temperatures(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__temperatures(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__temperatures(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__temperatures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__temperatures(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__temperatures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__temperatures(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__statuses(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__statuses(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__statuses(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__statuses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__statuses(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__statuses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__statuses(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsStates, timestamp),  // bytes offset in struct
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
    offsetof(usb_device_driver__msg__MotorsStates, motor_ids),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__motor_ids,  // size() function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__motor_ids,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__motor_ids,  // get(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__motor_ids,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__motor_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsStates, positions),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__positions,  // size() function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__positions,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__positions,  // get(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__positions,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__positions,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsStates, velocities),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__velocities,  // size() function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__velocities,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__velocities,  // get(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__velocities,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__velocities,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "currents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsStates, currents),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__currents,  // size() function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__currents,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__currents,  // get(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__currents,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__currents,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torques",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsStates, torques),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__torques,  // size() function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__torques,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__torques,  // get(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__torques,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__torques,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperatures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsStates, temperatures),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__temperatures,  // size() function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__temperatures,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__temperatures,  // get(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__temperatures,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__temperatures,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "statuses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__MotorsStates, statuses),  // bytes offset in struct
    NULL,  // default value
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__size_function__MotorsStates__statuses,  // size() function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_const_function__MotorsStates__statuses,  // get_const(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__get_function__MotorsStates__statuses,  // get(index) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__fetch_function__MotorsStates__statuses,  // fetch(index, &value) function pointer
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__assign_function__MotorsStates__statuses,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_members = {
  "usb_device_driver__msg",  // message namespace
  "MotorsStates",  // message name
  8,  // number of fields
  sizeof(usb_device_driver__msg__MotorsStates),
  usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_member_array,  // message members
  usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_init_function,  // function to initialize message memory (memory has to be allocated)
  usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_type_support_handle = {
  0,
  &usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usb_device_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usb_device_driver, msg, MotorsStates)() {
  usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_type_support_handle.typesupport_identifier) {
    usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &usb_device_driver__msg__MotorsStates__rosidl_typesupport_introspection_c__MotorsStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
