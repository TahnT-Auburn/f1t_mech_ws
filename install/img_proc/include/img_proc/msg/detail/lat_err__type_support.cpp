// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from img_proc:msg/LatErr.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "img_proc/msg/detail/lat_err__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace img_proc
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LatErr_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) img_proc::msg::LatErr(_init);
}

void LatErr_fini_function(void * message_memory)
{
  auto typed_message = static_cast<img_proc::msg::LatErr *>(message_memory);
  typed_message->~LatErr();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LatErr_message_member_array[1] = {
  {
    "lat_err",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_proc::msg::LatErr, lat_err),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LatErr_message_members = {
  "img_proc::msg",  // message namespace
  "LatErr",  // message name
  1,  // number of fields
  sizeof(img_proc::msg::LatErr),
  LatErr_message_member_array,  // message members
  LatErr_init_function,  // function to initialize message memory (memory has to be allocated)
  LatErr_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LatErr_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LatErr_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace img_proc


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<img_proc::msg::LatErr>()
{
  return &::img_proc::msg::rosidl_typesupport_introspection_cpp::LatErr_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, img_proc, msg, LatErr)() {
  return &::img_proc::msg::rosidl_typesupport_introspection_cpp::LatErr_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
