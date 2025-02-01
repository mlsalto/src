// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_interfaces:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_
#define SENSOR_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_interfaces/msg/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PID & msg,
  std::ostream & out)
{
  out << "{";
  // member: p
  {
    out << "p: ";
    rosidl_generator_traits::value_to_yaml(msg.p, out);
    out << ", ";
  }

  // member: i
  {
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << ", ";
  }

  // member: d
  {
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PID & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p: ";
    rosidl_generator_traits::value_to_yaml(msg.p, out);
    out << "\n";
  }

  // member: i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "i: ";
    rosidl_generator_traits::value_to_yaml(msg.i, out);
    out << "\n";
  }

  // member: d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d: ";
    rosidl_generator_traits::value_to_yaml(msg.d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PID & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sensor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interfaces::msg::PID & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interfaces::msg::PID & msg)
{
  return sensor_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interfaces::msg::PID>()
{
  return "sensor_interfaces::msg::PID";
}

template<>
inline const char * name<sensor_interfaces::msg::PID>()
{
  return "sensor_interfaces/msg/PID";
}

template<>
struct has_fixed_size<sensor_interfaces::msg::PID>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_interfaces::msg::PID>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_interfaces::msg::PID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_INTERFACES__MSG__DETAIL__PID__TRAITS_HPP_
