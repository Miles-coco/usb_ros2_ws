// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice
#include "usb_device_driver/msg/detail/motors_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "usb_device_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "usb_device_driver/msg/detail/motors_cmd__struct.h"
#include "usb_device_driver/msg/detail/motors_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // timestamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usb_device_driver
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usb_device_driver
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_usb_device_driver
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _MotorsCmd__ros_msg_type = usb_device_driver__msg__MotorsCmd;

static bool _MotorsCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorsCmd__ros_msg_type * ros_message = static_cast<const _MotorsCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timestamp, cdr))
    {
      return false;
    }
  }

  // Field name: motor_ids
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_ids;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_positions
  {
    size_t size = 12;
    auto array_ptr = ros_message->target_positions;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_velocities
  {
    size_t size = 12;
    auto array_ptr = ros_message->target_velocities;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: target_torques
  {
    size_t size = 12;
    auto array_ptr = ros_message->target_torques;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: kp
  {
    size_t size = 12;
    auto array_ptr = ros_message->kp;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: kd
  {
    size_t size = 12;
    auto array_ptr = ros_message->kd;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MotorsCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorsCmd__ros_msg_type * ros_message = static_cast<_MotorsCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timestamp))
    {
      return false;
    }
  }

  // Field name: motor_ids
  {
    size_t size = 12;
    auto array_ptr = ros_message->motor_ids;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_positions
  {
    size_t size = 12;
    auto array_ptr = ros_message->target_positions;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_velocities
  {
    size_t size = 12;
    auto array_ptr = ros_message->target_velocities;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: target_torques
  {
    size_t size = 12;
    auto array_ptr = ros_message->target_torques;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: kp
  {
    size_t size = 12;
    auto array_ptr = ros_message->kp;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: kd
  {
    size_t size = 12;
    auto array_ptr = ros_message->kd;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_usb_device_driver
size_t get_serialized_size_usb_device_driver__msg__MotorsCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorsCmd__ros_msg_type * ros_message = static_cast<const _MotorsCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);
  // field.name motor_ids
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->motor_ids;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_positions
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->target_positions;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_velocities
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->target_velocities;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_torques
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->target_torques;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kp
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->kp;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->kd;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorsCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_usb_device_driver__msg__MotorsCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_usb_device_driver
size_t max_serialized_size_usb_device_driver__msg__MotorsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: timestamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: motor_ids
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_positions
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_velocities
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_torques
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kp
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kd
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = usb_device_driver__msg__MotorsCmd;
    is_plain =
      (
      offsetof(DataType, kd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotorsCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_usb_device_driver__msg__MotorsCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotorsCmd = {
  "usb_device_driver::msg",
  "MotorsCmd",
  _MotorsCmd__cdr_serialize,
  _MotorsCmd__cdr_deserialize,
  _MotorsCmd__get_serialized_size,
  _MotorsCmd__max_serialized_size
};

static rosidl_message_type_support_t _MotorsCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorsCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, usb_device_driver, msg, MotorsCmd)() {
  return &_MotorsCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
