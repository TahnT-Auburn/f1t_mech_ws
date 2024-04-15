// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from img_proc:msg/LatErr.idl
// generated code does not contain a copyright notice
#include "img_proc/msg/detail/lat_err__rosidl_typesupport_fastrtps_cpp.hpp"
#include "img_proc/msg/detail/lat_err__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lat_err
  cdr << ros_message.lat_err;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  img_proc::msg::LatErr & ros_message)
{
  // Member: lat_err
  cdr >> ros_message.lat_err;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
get_serialized_size(
  const img_proc::msg::LatErr & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lat_err
  {
    size_t item_size = sizeof(ros_message.lat_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_img_proc
max_serialized_size_LatErr(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lat_err
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _LatErr__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const img_proc::msg::LatErr *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LatErr__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<img_proc::msg::LatErr *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LatErr__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const img_proc::msg::LatErr *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LatErr__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LatErr(full_bounded, 0);
}

static message_type_support_callbacks_t _LatErr__callbacks = {
  "img_proc::msg",
  "LatErr",
  _LatErr__cdr_serialize,
  _LatErr__cdr_deserialize,
  _LatErr__get_serialized_size,
  _LatErr__max_serialized_size
};

static rosidl_message_type_support_t _LatErr__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LatErr__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace img_proc

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_img_proc
const rosidl_message_type_support_t *
get_message_type_support_handle<img_proc::msg::LatErr>()
{
  return &img_proc::msg::typesupport_fastrtps_cpp::_LatErr__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, img_proc, msg, LatErr)() {
  return &img_proc::msg::typesupport_fastrtps_cpp::_LatErr__handle;
}

#ifdef __cplusplus
}
#endif
