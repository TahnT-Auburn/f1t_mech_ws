// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mech_msg:msg/Test.idl
// generated code does not contain a copyright notice
#include "mech_msg/msg/detail/test__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mech_msg/msg/detail/test__struct.hpp"

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

namespace mech_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
cdr_serialize(
  const mech_msg::msg::Test & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: test
  cdr << ros_message.test;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mech_msg::msg::Test & ros_message)
{
  // Member: test
  cdr >> ros_message.test;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
get_serialized_size(
  const mech_msg::msg::Test & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: test
  {
    size_t item_size = sizeof(ros_message.test);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mech_msg
max_serialized_size_Test(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: test
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Test__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mech_msg::msg::Test *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Test__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mech_msg::msg::Test *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Test__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mech_msg::msg::Test *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Test__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Test(full_bounded, 0);
}

static message_type_support_callbacks_t _Test__callbacks = {
  "mech_msg::msg",
  "Test",
  _Test__cdr_serialize,
  _Test__cdr_deserialize,
  _Test__get_serialized_size,
  _Test__max_serialized_size
};

static rosidl_message_type_support_t _Test__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Test__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mech_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mech_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<mech_msg::msg::Test>()
{
  return &mech_msg::msg::typesupport_fastrtps_cpp::_Test__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mech_msg, msg, Test)() {
  return &mech_msg::msg::typesupport_fastrtps_cpp::_Test__handle;
}

#ifdef __cplusplus
}
#endif
