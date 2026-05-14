// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usb_device_driver:msg/MotorsCmd.idl
// generated code does not contain a copyright notice
#include "usb_device_driver/msg/detail/motors_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
usb_device_driver__msg__MotorsCmd__init(usb_device_driver__msg__MotorsCmd * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    usb_device_driver__msg__MotorsCmd__fini(msg);
    return false;
  }
  // motor_ids
  // target_positions
  // target_velocities
  // target_torques
  // kp
  // kd
  return true;
}

void
usb_device_driver__msg__MotorsCmd__fini(usb_device_driver__msg__MotorsCmd * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // motor_ids
  // target_positions
  // target_velocities
  // target_torques
  // kp
  // kd
}

bool
usb_device_driver__msg__MotorsCmd__are_equal(const usb_device_driver__msg__MotorsCmd * lhs, const usb_device_driver__msg__MotorsCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // motor_ids
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->motor_ids[i] != rhs->motor_ids[i]) {
      return false;
    }
  }
  // target_positions
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->target_positions[i] != rhs->target_positions[i]) {
      return false;
    }
  }
  // target_velocities
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->target_velocities[i] != rhs->target_velocities[i]) {
      return false;
    }
  }
  // target_torques
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->target_torques[i] != rhs->target_torques[i]) {
      return false;
    }
  }
  // kp
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->kp[i] != rhs->kp[i]) {
      return false;
    }
  }
  // kd
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->kd[i] != rhs->kd[i]) {
      return false;
    }
  }
  return true;
}

bool
usb_device_driver__msg__MotorsCmd__copy(
  const usb_device_driver__msg__MotorsCmd * input,
  usb_device_driver__msg__MotorsCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // motor_ids
  for (size_t i = 0; i < 12; ++i) {
    output->motor_ids[i] = input->motor_ids[i];
  }
  // target_positions
  for (size_t i = 0; i < 12; ++i) {
    output->target_positions[i] = input->target_positions[i];
  }
  // target_velocities
  for (size_t i = 0; i < 12; ++i) {
    output->target_velocities[i] = input->target_velocities[i];
  }
  // target_torques
  for (size_t i = 0; i < 12; ++i) {
    output->target_torques[i] = input->target_torques[i];
  }
  // kp
  for (size_t i = 0; i < 12; ++i) {
    output->kp[i] = input->kp[i];
  }
  // kd
  for (size_t i = 0; i < 12; ++i) {
    output->kd[i] = input->kd[i];
  }
  return true;
}

usb_device_driver__msg__MotorsCmd *
usb_device_driver__msg__MotorsCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_device_driver__msg__MotorsCmd * msg = (usb_device_driver__msg__MotorsCmd *)allocator.allocate(sizeof(usb_device_driver__msg__MotorsCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usb_device_driver__msg__MotorsCmd));
  bool success = usb_device_driver__msg__MotorsCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
usb_device_driver__msg__MotorsCmd__destroy(usb_device_driver__msg__MotorsCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    usb_device_driver__msg__MotorsCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
usb_device_driver__msg__MotorsCmd__Sequence__init(usb_device_driver__msg__MotorsCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_device_driver__msg__MotorsCmd * data = NULL;

  if (size) {
    data = (usb_device_driver__msg__MotorsCmd *)allocator.zero_allocate(size, sizeof(usb_device_driver__msg__MotorsCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usb_device_driver__msg__MotorsCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usb_device_driver__msg__MotorsCmd__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
usb_device_driver__msg__MotorsCmd__Sequence__fini(usb_device_driver__msg__MotorsCmd__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      usb_device_driver__msg__MotorsCmd__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

usb_device_driver__msg__MotorsCmd__Sequence *
usb_device_driver__msg__MotorsCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_device_driver__msg__MotorsCmd__Sequence * array = (usb_device_driver__msg__MotorsCmd__Sequence *)allocator.allocate(sizeof(usb_device_driver__msg__MotorsCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = usb_device_driver__msg__MotorsCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
usb_device_driver__msg__MotorsCmd__Sequence__destroy(usb_device_driver__msg__MotorsCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    usb_device_driver__msg__MotorsCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
usb_device_driver__msg__MotorsCmd__Sequence__are_equal(const usb_device_driver__msg__MotorsCmd__Sequence * lhs, const usb_device_driver__msg__MotorsCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!usb_device_driver__msg__MotorsCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
usb_device_driver__msg__MotorsCmd__Sequence__copy(
  const usb_device_driver__msg__MotorsCmd__Sequence * input,
  usb_device_driver__msg__MotorsCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(usb_device_driver__msg__MotorsCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    usb_device_driver__msg__MotorsCmd * data =
      (usb_device_driver__msg__MotorsCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!usb_device_driver__msg__MotorsCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          usb_device_driver__msg__MotorsCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!usb_device_driver__msg__MotorsCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
