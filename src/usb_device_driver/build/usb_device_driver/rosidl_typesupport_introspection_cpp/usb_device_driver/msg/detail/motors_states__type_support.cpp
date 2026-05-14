// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from usb_device_driver:msg/MotorsStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "usb_device_driver/msg/detail/motors_states__struct.hpp"
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

void MotorsStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) usb_device_driver::msg::MotorsStates(_init);
}

void MotorsStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<usb_device_driver::msg::MotorsStates *>(message_memory);
  typed_message->~MotorsStates();
}

size_t size_function__MotorsStates__motor_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsStates__motor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsStates__motor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsStates__motor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorsStates__motor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorsStates__motor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorsStates__motor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__MotorsStates__positions(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsStates__positions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsStates__positions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsStates__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsStates__positions(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsStates__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsStates__positions(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsStates__velocities(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsStates__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsStates__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsStates__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsStates__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsStates__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsStates__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsStates__currents(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsStates__currents(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsStates__currents(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsStates__currents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsStates__currents(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsStates__currents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsStates__currents(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsStates__torques(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsStates__torques(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsStates__torques(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsStates__torques(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsStates__torques(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsStates__torques(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsStates__torques(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsStates__temperatures(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsStates__temperatures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsStates__temperatures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsStates__temperatures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MotorsStates__temperatures(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MotorsStates__temperatures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MotorsStates__temperatures(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MotorsStates__statuses(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotorsStates__statuses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorsStates__statuses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorsStates__statuses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MotorsStates__statuses(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MotorsStates__statuses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MotorsStates__statuses(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorsStates_message_member_array[8] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsStates, timestamp),  // bytes offset in struct
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
    offsetof(usb_device_driver::msg::MotorsStates, motor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsStates__motor_ids,  // size() function pointer
    get_const_function__MotorsStates__motor_ids,  // get_const(index) function pointer
    get_function__MotorsStates__motor_ids,  // get(index) function pointer
    fetch_function__MotorsStates__motor_ids,  // fetch(index, &value) function pointer
    assign_function__MotorsStates__motor_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "positions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsStates, positions),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsStates__positions,  // size() function pointer
    get_const_function__MotorsStates__positions,  // get_const(index) function pointer
    get_function__MotorsStates__positions,  // get(index) function pointer
    fetch_function__MotorsStates__positions,  // fetch(index, &value) function pointer
    assign_function__MotorsStates__positions,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsStates, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsStates__velocities,  // size() function pointer
    get_const_function__MotorsStates__velocities,  // get_const(index) function pointer
    get_function__MotorsStates__velocities,  // get(index) function pointer
    fetch_function__MotorsStates__velocities,  // fetch(index, &value) function pointer
    assign_function__MotorsStates__velocities,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "currents",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsStates, currents),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsStates__currents,  // size() function pointer
    get_const_function__MotorsStates__currents,  // get_const(index) function pointer
    get_function__MotorsStates__currents,  // get(index) function pointer
    fetch_function__MotorsStates__currents,  // fetch(index, &value) function pointer
    assign_function__MotorsStates__currents,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "torques",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsStates, torques),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsStates__torques,  // size() function pointer
    get_const_function__MotorsStates__torques,  // get_const(index) function pointer
    get_function__MotorsStates__torques,  // get(index) function pointer
    fetch_function__MotorsStates__torques,  // fetch(index, &value) function pointer
    assign_function__MotorsStates__torques,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "temperatures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsStates, temperatures),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsStates__temperatures,  // size() function pointer
    get_const_function__MotorsStates__temperatures,  // get_const(index) function pointer
    get_function__MotorsStates__temperatures,  // get(index) function pointer
    fetch_function__MotorsStates__temperatures,  // fetch(index, &value) function pointer
    assign_function__MotorsStates__temperatures,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "statuses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver::msg::MotorsStates, statuses),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorsStates__statuses,  // size() function pointer
    get_const_function__MotorsStates__statuses,  // get_const(index) function pointer
    get_function__MotorsStates__statuses,  // get(index) function pointer
    fetch_function__MotorsStates__statuses,  // fetch(index, &value) function pointer
    assign_function__MotorsStates__statuses,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorsStates_message_members = {
  "usb_device_driver::msg",  // message namespace
  "MotorsStates",  // message name
  8,  // number of fields
  sizeof(usb_device_driver::msg::MotorsStates),
  MotorsStates_message_member_array,  // message members
  MotorsStates_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorsStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorsStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorsStates_message_members,
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
get_message_type_support_handle<usb_device_driver::msg::MotorsStates>()
{
  return &::usb_device_driver::msg::rosidl_typesupport_introspection_cpp::MotorsStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, usb_device_driver, msg, MotorsStates)() {
  return &::usb_device_driver::msg::rosidl_typesupport_introspection_cpp::MotorsStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
