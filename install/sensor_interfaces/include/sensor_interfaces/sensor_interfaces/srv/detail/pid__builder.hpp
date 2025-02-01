// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_interfaces:srv/PID.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__PID__BUILDER_HPP_
#define SENSOR_INTERFACES__SRV__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_interfaces/srv/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_interfaces
{

namespace srv
{

namespace builder
{

class Init_PID_Request_d
{
public:
  explicit Init_PID_Request_d(::sensor_interfaces::srv::PID_Request & msg)
  : msg_(msg)
  {}
  ::sensor_interfaces::srv::PID_Request d(::sensor_interfaces::srv::PID_Request::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::PID_Request msg_;
};

class Init_PID_Request_i
{
public:
  explicit Init_PID_Request_i(::sensor_interfaces::srv::PID_Request & msg)
  : msg_(msg)
  {}
  Init_PID_Request_d i(::sensor_interfaces::srv::PID_Request::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_PID_Request_d(msg_);
  }

private:
  ::sensor_interfaces::srv::PID_Request msg_;
};

class Init_PID_Request_p
{
public:
  Init_PID_Request_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_Request_i p(::sensor_interfaces::srv::PID_Request::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_PID_Request_i(msg_);
  }

private:
  ::sensor_interfaces::srv::PID_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::PID_Request>()
{
  return sensor_interfaces::srv::builder::Init_PID_Request_p();
}

}  // namespace sensor_interfaces


namespace sensor_interfaces
{

namespace srv
{

namespace builder
{

class Init_PID_Response_result
{
public:
  Init_PID_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_interfaces::srv::PID_Response result(::sensor_interfaces::srv::PID_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::PID_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::PID_Response>()
{
  return sensor_interfaces::srv::builder::Init_PID_Response_result();
}

}  // namespace sensor_interfaces

#endif  // SENSOR_INTERFACES__SRV__DETAIL__PID__BUILDER_HPP_
