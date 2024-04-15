// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LAT_ERR__TRAITS_HPP_
#define CUSTOM_MSG__MSG__DETAIL__LAT_ERR__TRAITS_HPP_

#include "custom_msg/msg/detail/lat_err__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const custom_msg::msg::LatErr & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laterr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laterr: ";
    value_to_yaml(msg.laterr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const custom_msg::msg::LatErr & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<custom_msg::msg::LatErr>()
{
  return "custom_msg::msg::LatErr";
}

template<>
inline const char * name<custom_msg::msg::LatErr>()
{
  return "custom_msg/msg/LatErr";
}

template<>
struct has_fixed_size<custom_msg::msg::LatErr>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msg::msg::LatErr>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msg::msg::LatErr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG__MSG__DETAIL__LAT_ERR__TRAITS_HPP_
