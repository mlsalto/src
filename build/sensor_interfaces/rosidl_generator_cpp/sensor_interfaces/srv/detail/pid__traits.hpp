// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_interfaces:srv/PID.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__PID__TRAITS_HPP_
#define SENSOR_INTERFACES__SRV__DETAIL__PID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_interfaces/srv/detail/pid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PID_Request & msg,
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
  const PID_Request & msg,
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

inline std::string to_yaml(const PID_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interfaces::srv::PID_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interfaces::srv::PID_Request & msg)
{
  return sensor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interfaces::srv::PID_Request>()
{
  return "sensor_interfaces::srv::PID_Request";
}

template<>
inline const char * name<sensor_interfaces::srv::PID_Request>()
{
  return "sensor_interfaces/srv/PID_Request";
}

template<>
struct has_fixed_size<sensor_interfaces::srv::PID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_interfaces::srv::PID_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_interfaces::srv::PID_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace sensor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PID_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PID_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interfaces::srv::PID_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interfaces::srv::PID_Response & msg)
{
  return sensor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interfaces::srv::PID_Response>()
{
  return "sensor_interfaces::srv::PID_Response";
}

template<>
inline const char * name<sensor_interfaces::srv::PID_Response>()
{
  return "sensor_interfaces/srv/PID_Response";
}

template<>
struct has_fixed_size<sensor_interfaces::srv::PID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_interfaces::srv::PID_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_interfaces::srv::PID_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_interfaces::srv::PID>()
{
  return "sensor_interfaces::srv::PID";
}

template<>
inline const char * name<sensor_interfaces::srv::PID>()
{
  return "sensor_interfaces/srv/PID";
}

template<>
struct has_fixed_size<sensor_interfaces::srv::PID>
  : std::integral_constant<
    bool,
    has_fixed_size<sensor_interfaces::srv::PID_Request>::value &&
    has_fixed_size<sensor_interfaces::srv::PID_Response>::value
  >
{
};

template<>
struct has_bounded_size<sensor_interfaces::srv::PID>
  : std::integral_constant<
    bool,
    has_bounded_size<sensor_interfaces::srv::PID_Request>::value &&
    has_bounded_size<sensor_interfaces::srv::PID_Response>::value
  >
{
};

template<>
struct is_service<sensor_interfaces::srv::PID>
  : std::true_type
{
};

template<>
struct is_service_request<sensor_interfaces::srv::PID_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sensor_interfaces::srv::PID_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_INTERFACES__SRV__DETAIL__PID__TRAITS_HPP_
