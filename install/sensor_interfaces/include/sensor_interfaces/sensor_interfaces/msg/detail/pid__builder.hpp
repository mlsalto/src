// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_
#define SENSOR_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_interfaces
{

namespace msg
{

namespace builder
{

class Init_PID_d
{
public:
  explicit Init_PID_d(::sensor_interfaces::msg::PID & msg)
  : msg_(msg)
  {}
  ::sensor_interfaces::msg::PID d(::sensor_interfaces::msg::PID::_d_type arg)
  {
    msg_.d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::msg::PID msg_;
};

class Init_PID_i
{
public:
  explicit Init_PID_i(::sensor_interfaces::msg::PID & msg)
  : msg_(msg)
  {}
  Init_PID_d i(::sensor_interfaces::msg::PID::_i_type arg)
  {
    msg_.i = std::move(arg);
    return Init_PID_d(msg_);
  }

private:
  ::sensor_interfaces::msg::PID msg_;
};

class Init_PID_p
{
public:
  Init_PID_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PID_i p(::sensor_interfaces::msg::PID::_p_type arg)
  {
    msg_.p = std::move(arg);
    return Init_PID_i(msg_);
  }

private:
  ::sensor_interfaces::msg::PID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::msg::PID>()
{
  return sensor_interfaces::msg::builder::Init_PID_p();
}

}  // namespace sensor_interfaces

#endif  // SENSOR_INTERFACES__MSG__DETAIL__PID__BUILDER_HPP_
