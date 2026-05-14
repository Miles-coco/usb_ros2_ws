// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "usb_device_driver/msg/detail/motors_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace usb_device_driver
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorsCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) usb_device_driver::msg::MotorsCmd(_init);
}

void MotorsCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<usb_device_driver::msg::MotorsCmd *>(message_memory);
  typed_message->~MotorsCmd();
}

size_t size_function__MotorsCmd__motor_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsCmd__motor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCmd__motor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsCmd__motor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorsCmd__motor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorsCmd__motor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorsCmd__motor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorsCmd__target_positions(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsCmd__target_positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCmd__target_positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsCmd__target_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsCmd__target_positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsCmd__target_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsCmd__target_positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsCmd__target_velocities(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsCmd__target_velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCmd__target_velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsCmd__target_velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsCmd__target_velocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsCmd__target_velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsCmd__target_velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsCmd__target_torques(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsCmd__target_torques(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCmd__target_torques(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsCmd__target_torques(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsCmd__target_torques(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsCmd__target_torques(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsCmd__target_torques(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsCmd__kp(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsCmd__kp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCmd__kp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsCmd__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsCmd__kp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsCmd__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsCmd__kp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsCmd__kd(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsCmd__kd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsCmd__kd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsCmd__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsCmd__kd(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsCmd__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsCmd__kd(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorsCmd_message_member_array[7] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsCmd, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsCmd, motor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCmd__motor_ids,  // size() function pointer
    get_const_function__MotorsCmd__motor_ids,  // get_const(index) function pointer
    get_function__MotorsCmd__motor_ids,  // get(index) function pointer
    fetch_function__MotorsCmd__motor_ids,  // fetch(index, &value) function pointer
    assign_function__MotorsCmd__motor_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsCmd, target_positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCmd__target_positions,  // size() function pointer
    get_const_function__MotorsCmd__target_positions,  // get_const(index) function pointer
    get_function__MotorsCmd__target_positions,  // get(index) function pointer
    fetch_function__MotorsCmd__target_positions,  // fetch(index, &value) function pointer
    assign_function__MotorsCmd__target_positions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsCmd, target_velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCmd__target_velocities,  // size() function pointer
    get_const_function__MotorsCmd__target_velocities,  // get_const(index) function pointer
    get_function__MotorsCmd__target_velocities,  // get(index) function pointer
    fetch_function__MotorsCmd__target_velocities,  // fetch(index, &value) function pointer
    assign_function__MotorsCmd__target_velocities,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_torques",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsCmd, target_torques),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCmd__target_torques,  // size() function pointer
    get_const_function__MotorsCmd__target_torques,  // get_const(index) function pointer
    get_function__MotorsCmd__target_torques,  // get(index) function pointer
    fetch_function__MotorsCmd__target_torques,  // fetch(index, &value) function pointer
    assign_function__MotorsCmd__target_torques,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsCmd, kp),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCmd__kp,  // size() function pointer
    get_const_function__MotorsCmd__kp,  // get_const(index) function pointer
    get_function__MotorsCmd__kp,  // get(index) function pointer
    fetch_function__MotorsCmd__kp,  // fetch(index, &value) function pointer
    assign_function__MotorsCmd__kp,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsCmd, kd),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsCmd__kd,  // size() function pointer
    get_const_function__MotorsCmd__kd,  // get_const(index) function pointer
    get_function__MotorsCmd__kd,  // get(index) function pointer
    fetch_function__MotorsCmd__kd,  // fetch(index, &value) function pointer
    assign_function__MotorsCmd__kd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorsCmd_message_members = {
  "usb_device_driver::msg",  // message namespace
  "MotorsCmd",  // message name
  7,  // number of fields
  sizeof(usb_device_driver::msg::MotorsCmd),
  MotorsCmd_message_member_array,  // message members
  MotorsCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorsCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorsCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace usb_device_driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<usb_device_driver::msg::MotorsCmd>()
{
  return &::usb_device_driver::msg::rosidl_typesupport_introspection_cpp::MotorsCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, usb_device_driver, msg, MotorsCmd)() {
  return &::usb_device_driver::msg::rosidl_typesupport_introspection_cpp::MotorsCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
