// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mech_msg:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__LAT_ERR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MECH_MSG__MSG__DETAIL__LAT_ERR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mech_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mech_msg/msg/detail/lat_err__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace mech_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
cdr_serialize(
  const mech_msg::msg::LatErr & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mech_msg::msg::LatErr & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
get_serialized_size(
  const mech_msg::msg::LatErr & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
max_serialized_size_LatErr(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mech_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mech_msg, msg, LatErr)();

#ifdef __cplusplus
}
#endif

#endif  // MECH_MSG__MSG__DETAIL__LAT_ERR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
