// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_interfaces:msg/PID.idl
// generated code does not contain a copyright notice
#include "sensor_interfaces/msg/detail/pid__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sensor_interfaces__msg__PID__init(sensor_interfaces__msg__PID * msg)
{
  if (!msg) {
    return false;
  }
  // p
  // i
  // d
  return true;
}

void
sensor_interfaces__msg__PID__fini(sensor_interfaces__msg__PID * msg)
{
  if (!msg) {
    return;
  }
  // p
  // i
  // d
}

bool
sensor_interfaces__msg__PID__are_equal(const sensor_interfaces__msg__PID * lhs, const sensor_interfaces__msg__PID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // p
  if (lhs->p != rhs->p) {
    return false;
  }
  // i
  if (lhs->i != rhs->i) {
    return false;
  }
  // d
  if (lhs->d != rhs->d) {
    return false;
  }
  return true;
}

bool
sensor_interfaces__msg__PID__copy(
  const sensor_interfaces__msg__PID * input,
  sensor_interfaces__msg__PID * output)
{
  if (!input || !output) {
    return false;
  }
  // p
  output->p = input->p;
  // i
  output->i = input->i;
  // d
  output->d = input->d;
  return true;
}

sensor_interfaces__msg__PID *
sensor_interfaces__msg__PID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__msg__PID * msg = (sensor_interfaces__msg__PID *)allocator.allocate(sizeof(sensor_interfaces__msg__PID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_interfaces__msg__PID));
  bool success = sensor_interfaces__msg__PID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_interfaces__msg__PID__destroy(sensor_interfaces__msg__PID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_interfaces__msg__PID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_interfaces__msg__PID__Sequence__init(sensor_interfaces__msg__PID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__msg__PID * data = NULL;

  if (size) {
    data = (sensor_interfaces__msg__PID *)allocator.zero_allocate(size, sizeof(sensor_interfaces__msg__PID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_interfaces__msg__PID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_interfaces__msg__PID__fini(&data[i - 1]);
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
sensor_interfaces__msg__PID__Sequence__fini(sensor_interfaces__msg__PID__Sequence * array)
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
      sensor_interfaces__msg__PID__fini(&array->data[i]);
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

sensor_interfaces__msg__PID__Sequence *
sensor_interfaces__msg__PID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__msg__PID__Sequence * array = (sensor_interfaces__msg__PID__Sequence *)allocator.allocate(sizeof(sensor_interfaces__msg__PID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_interfaces__msg__PID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_interfaces__msg__PID__Sequence__destroy(sensor_interfaces__msg__PID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_interfaces__msg__PID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_interfaces__msg__PID__Sequence__are_equal(const sensor_interfaces__msg__PID__Sequence * lhs, const sensor_interfaces__msg__PID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_interfaces__msg__PID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_interfaces__msg__PID__Sequence__copy(
  const sensor_interfaces__msg__PID__Sequence * input,
  sensor_interfaces__msg__PID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_interfaces__msg__PID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_interfaces__msg__PID * data =
      (sensor_interfaces__msg__PID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_interfaces__msg__PID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_interfaces__msg__PID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_interfaces__msg__PID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
