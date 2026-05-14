// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from usb_device_driver:msg/MotorsStates.idl
// generated code does not contain a copyright notice
#include "usb_device_driver/msg/detail/motors_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
usb_device_driver__msg__MotorsStates__init(usb_device_driver__msg__MotorsStates * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    usb_device_driver__msg__MotorsStates__fini(msg);
    return false;
  }
  // motor_ids
  // positions
  // velocities
  // currents
  // torques
  // temperatures
  // statuses
  return true;
}

void
usb_device_driver__msg__MotorsStates__fini(usb_device_driver__msg__MotorsStates * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // motor_ids
  // positions
  // velocities
  // currents
  // torques
  // temperatures
  // statuses
}

bool
usb_device_driver__msg__MotorsStates__are_equal(const usb_device_driver__msg__MotorsStates * lhs, const usb_device_driver__msg__MotorsStates * rhs)
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
  // positions
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->positions[i] != rhs->positions[i]) {
      return false;
    }
  }
  // velocities
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->velocities[i] != rhs->velocities[i]) {
      return false;
    }
  }
  // currents
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->currents[i] != rhs->currents[i]) {
      return false;
    }
  }
  // torques
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->torques[i] != rhs->torques[i]) {
      return false;
    }
  }
  // temperatures
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->temperatures[i] != rhs->temperatures[i]) {
      return false;
    }
  }
  // statuses
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->statuses[i] != rhs->statuses[i]) {
      return false;
    }
  }
  return true;
}

bool
usb_device_driver__msg__MotorsStates__copy(
  const usb_device_driver__msg__MotorsStates * input,
  usb_device_driver__msg__MotorsStates * output)
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
  // positions
  for (size_t i = 0; i < 12; ++i) {
    output->positions[i] = input->positions[i];
  }
  // velocities
  for (size_t i = 0; i < 12; ++i) {
    output->velocities[i] = input->velocities[i];
  }
  // currents
  for (size_t i = 0; i < 12; ++i) {
    output->currents[i] = input->currents[i];
  }
  // torques
  for (size_t i = 0; i < 12; ++i) {
    output->torques[i] = input->torques[i];
  }
  // temperatures
  for (size_t i = 0; i < 12; ++i) {
    output->temperatures[i] = input->temperatures[i];
  }
  // statuses
  for (size_t i = 0; i < 12; ++i) {
    output->statuses[i] = input->statuses[i];
  }
  return true;
}

usb_device_driver__msg__MotorsStates *
usb_device_driver__msg__MotorsStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_device_driver__msg__MotorsStates * msg = (usb_device_driver__msg__MotorsStates *)allocator.allocate(sizeof(usb_device_driver__msg__MotorsStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(usb_device_driver__msg__MotorsStates));
  bool success = usb_device_driver__msg__MotorsStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
usb_device_driver__msg__MotorsStates__destroy(usb_device_driver__msg__MotorsStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    usb_device_driver__msg__MotorsStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
usb_device_driver__msg__MotorsStates__Sequence__init(usb_device_driver__msg__MotorsStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_device_driver__msg__MotorsStates * data = NULL;

  if (size) {
    data = (usb_device_driver__msg__MotorsStates *)allocator.zero_allocate(size, sizeof(usb_device_driver__msg__MotorsStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = usb_device_driver__msg__MotorsStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        usb_device_driver__msg__MotorsStates__fini(&data[i - 1]);
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
usb_device_driver__msg__MotorsStates__Sequence__fini(usb_device_driver__msg__MotorsStates__Sequence * array)
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
      usb_device_driver__msg__MotorsStates__fini(&array->data[i]);
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

usb_device_driver__msg__MotorsStates__Sequence *
usb_device_driver__msg__MotorsStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  usb_device_driver__msg__MotorsStates__Sequence * array = (usb_device_driver__msg__MotorsStates__Sequence *)allocator.allocate(sizeof(usb_device_driver__msg__MotorsStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = usb_device_driver__msg__MotorsStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
usb_device_driver__msg__MotorsStates__Sequence__destroy(usb_device_driver__msg__MotorsStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    usb_device_driver__msg__MotorsStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
usb_device_driver__msg__MotorsStates__Sequence__are_equal(const usb_device_driver__msg__MotorsStates__Sequence * lhs, const usb_device_driver__msg__MotorsStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!usb_device_driver__msg__MotorsStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
usb_device_driver__msg__MotorsStates__Sequence__copy(
  const usb_device_driver__msg__MotorsStates__Sequence * input,
  usb_device_driver__msg__MotorsStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(usb_device_driver__msg__MotorsStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    usb_device_driver__msg__MotorsStates * data =
      (usb_device_driver__msg__MotorsStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!usb_device_driver__msg__MotorsStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          usb_device_driver__msg__MotorsStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!usb_device_driver__msg__MotorsStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
