// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensor_interfaces:srv/PID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensor_interfaces/srv/detail/pid__rosidl_typesupport_introspection_c.h"
#include "sensor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensor_interfaces/srv/detail/pid__functions.h"
#include "sensor_interfaces/srv/detail/pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_interfaces__srv__PID_Request__init(message_memory);
}

void sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_fini_function(void * message_memory)
{
  sensor_interfaces__srv__PID_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_member_array[3] = {
  {
    "p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_interfaces__srv__PID_Request, p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "i",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_interfaces__srv__PID_Request, i),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_interfaces__srv__PID_Request, d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_members = {
  "sensor_interfaces__srv",  // message namespace
  "PID_Request",  // message name
  3,  // number of fields
  sizeof(sensor_interfaces__srv__PID_Request),
  sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_member_array,  // message members
  sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_type_support_handle = {
  0,
  &sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, PID_Request)() {
  if (!sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_type_support_handle.typesupport_identifier) {
    sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_interfaces__srv__PID_Request__rosidl_typesupport_introspection_c__PID_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "sensor_interfaces/srv/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "sensor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "sensor_interfaces/srv/detail/pid__functions.h"
// already included above
// #include "sensor_interfaces/srv/detail/pid__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_interfaces__srv__PID_Response__init(message_memory);
}

void sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_fini_function(void * message_memory)
{
  sensor_interfaces__srv__PID_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_interfaces__srv__PID_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_members = {
  "sensor_interfaces__srv",  // message namespace
  "PID_Response",  // message name
  1,  // number of fields
  sizeof(sensor_interfaces__srv__PID_Response),
  sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_member_array,  // message members
  sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_type_support_handle = {
  0,
  &sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, PID_Response)() {
  if (!sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_type_support_handle.typesupport_identifier) {
    sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_interfaces__srv__PID_Response__rosidl_typesupport_introspection_c__PID_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sensor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "sensor_interfaces/srv/detail/pid__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_service_members = {
  "sensor_interfaces__srv",  // service namespace
  "PID",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_Request_message_type_support_handle,
  NULL  // response message
  // sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_Response_message_type_support_handle
};

static rosidl_service_type_support_t sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_service_type_support_handle = {
  0,
  &sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, PID_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, PID_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, PID)() {
  if (!sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_service_type_support_handle.typesupport_identifier) {
    sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, PID_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, PID_Response)()->data;
  }

  return &sensor_interfaces__srv__detail__pid__rosidl_typesupport_introspection_c__PID_service_type_support_handle;
}
