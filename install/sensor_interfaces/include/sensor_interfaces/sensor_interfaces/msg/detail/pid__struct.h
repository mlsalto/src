// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__PID__STRUCT_H_
#define SENSOR_INTERFACES__MSG__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PID in the package sensor_interfaces.
typedef struct sensor_interfaces__msg__PID
{
  double p;
  double i;
  double d;
} sensor_interfaces__msg__PID;

// Struct for a sequence of sensor_interfaces__msg__PID.
typedef struct sensor_interfaces__msg__PID__Sequence
{
  sensor_interfaces__msg__PID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interfaces__msg__PID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACES__MSG__DETAIL__PID__STRUCT_H_
