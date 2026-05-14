// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from usb_device_driver:msg/IMUData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "usb_device_driver/msg/detail/imu_data__rosidl_typesupport_introspection_c.h"
#include "usb_device_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "usb_device_driver/msg/detail/imu_data__functions.h"
#include "usb_device_driver/msg/detail/imu_data__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  usb_device_driver__msg__IMUData__init(message_memory);
}

void usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_fini_function(void * message_memory)
{
  usb_device_driver__msg__IMUData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__IMUData, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__IMUData, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__IMUData, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(usb_device_driver__msg__IMUData, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_members = {
  "usb_device_driver__msg",  // message namespace
  "IMUData",  // message name
  4,  // number of fields
  sizeof(usb_device_driver__msg__IMUData),
  usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_member_array,  // message members
  usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_init_function,  // function to initialize message memory (memory has to be allocated)
  usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_type_support_handle = {
  0,
  &usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_usb_device_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, usb_device_driver, msg, IMUData)() {
  usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_type_support_handle.typesupport_identifier) {
    usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &usb_device_driver__msg__IMUData__rosidl_typesupport_introspection_c__IMUData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
