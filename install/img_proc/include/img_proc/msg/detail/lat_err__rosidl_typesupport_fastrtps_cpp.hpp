// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from img_proc:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef IMG_PROC__MSG__DETAIL__LAT_ERR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define IMG_PROC__MSG__DETAIL__LAT_ERR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "img_proc/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "img_proc/msg/detail/lat_err__struct.hpp"

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

namespace img_proc
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
cdr_serialize(
  const img_proc::msg::LatErr & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  img_proc::msg::LatErr & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
get_serialized_size(
  const img_proc::msg::LatErr & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
max_serialized_size_LatErr(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace img_proc

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, img_proc, msg, LatErr)();

#ifdef __cplusplus
}
#endif

#endif  // IMG_PROC__MSG__DETAIL__LAT_ERR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_