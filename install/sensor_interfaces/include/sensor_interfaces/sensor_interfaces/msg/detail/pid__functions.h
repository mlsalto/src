// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sensor_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__PID__FUNCTIONS_H_
#define SENSOR_INTERFACES__MSG__DETAIL__PID__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sensor_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sensor_interfaces/msg/detail/pid__struct.h"

/// Initialize msg/PID message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sensor_interfaces__msg__PID
 * )) before or use
 * sensor_interfaces__msg__PID__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
bool
sensor_interfaces__msg__PID__init(sensor_interfaces__msg__PID * msg);

/// Finalize msg/PID message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
void
sensor_interfaces__msg__PID__fini(sensor_interfaces__msg__PID * msg);

/// Create msg/PID message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sensor_interfaces__msg__PID__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
sensor_interfaces__msg__PID *
sensor_interfaces__msg__PID__create();

/// Destroy msg/PID message.
/**
 * It calls
 * sensor_interfaces__msg__PID__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
void
sensor_interfaces__msg__PID__destroy(sensor_interfaces__msg__PID * msg);

/// Check for msg/PID message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
bool
sensor_interfaces__msg__PID__are_equal(const sensor_interfaces__msg__PID * lhs, const sensor_interfaces__msg__PID * rhs);

/// Copy a msg/PID message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
bool
sensor_interfaces__msg__PID__copy(
  const sensor_interfaces__msg__PID * input,
  sensor_interfaces__msg__PID * output);

/// Initialize array of msg/PID messages.
/**
 * It allocates the memory for the number of elements and calls
 * sensor_interfaces__msg__PID__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
bool
sensor_interfaces__msg__PID__Sequence__init(sensor_interfaces__msg__PID__Sequence * array, size_t size);

/// Finalize array of msg/PID messages.
/**
 * It calls
 * sensor_interfaces__msg__PID__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
void
sensor_interfaces__msg__PID__Sequence__fini(sensor_interfaces__msg__PID__Sequence * array);

/// Create array of msg/PID messages.
/**
 * It allocates the memory for the array and calls
 * sensor_interfaces__msg__PID__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
sensor_interfaces__msg__PID__Sequence *
sensor_interfaces__msg__PID__Sequence__create(size_t size);

/// Destroy array of msg/PID messages.
/**
 * It calls
 * sensor_interfaces__msg__PID__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
void
sensor_interfaces__msg__PID__Sequence__destroy(sensor_interfaces__msg__PID__Sequence * array);

/// Check for msg/PID message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
bool
sensor_interfaces__msg__PID__Sequence__are_equal(const sensor_interfaces__msg__PID__Sequence * lhs, const sensor_interfaces__msg__PID__Sequence * rhs);

/// Copy an array of msg/PID messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
bool
sensor_interfaces__msg__PID__Sequence__copy(
  const sensor_interfaces__msg__PID__Sequence * input,
  sensor_interfaces__msg__PID__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACES__MSG__DETAIL__PID__FUNCTIONS_H_
