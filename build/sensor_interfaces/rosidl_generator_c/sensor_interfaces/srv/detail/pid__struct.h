// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_interfaces:srv/PID.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__PID__STRUCT_H_
#define SENSOR_INTERFACES__SRV__DETAIL__PID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PID in the package sensor_interfaces.
typedef struct sensor_interfaces__srv__PID_Request
{
  double p;
  double i;
  double d;
} sensor_interfaces__srv__PID_Request;

// Struct for a sequence of sensor_interfaces__srv__PID_Request.
typedef struct sensor_interfaces__srv__PID_Request__Sequence
{
  sensor_interfaces__srv__PID_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interfaces__srv__PID_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PID in the package sensor_interfaces.
typedef struct sensor_interfaces__srv__PID_Response
{
  int32_t result;
} sensor_interfaces__srv__PID_Response;

// Struct for a sequence of sensor_interfaces__srv__PID_Response.
typedef struct sensor_interfaces__srv__PID_Response__Sequence
{
  sensor_interfaces__srv__PID_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interfaces__srv__PID_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACES__SRV__DETAIL__PID__STRUCT_H_
