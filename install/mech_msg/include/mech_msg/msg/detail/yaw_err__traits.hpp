// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mech_msg:msg/YawErr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__YAW_ERR__TRAITS_HPP_
#define MECH_MSG__MSG__DETAIL__YAW_ERR__TRAITS_HPP_

#include "mech_msg/msg/detail/yaw_err__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mech_msg::msg::YawErr & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_err: ";
    value_to_yaml(msg.yaw_err, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mech_msg::msg::YawErr & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mech_msg::msg::YawErr>()
{
  return "mech_msg::msg::YawErr";
}

template<>
inline const char * name<mech_msg::msg::YawErr>()
{
  return "mech_msg/msg/YawErr";
}

template<>
struct has_fixed_size<mech_msg::msg::YawErr>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mech_msg::msg::YawErr>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mech_msg::msg::YawErr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECH_MSG__MSG__DETAIL__YAW_ERR__TRAITS_HPP_
