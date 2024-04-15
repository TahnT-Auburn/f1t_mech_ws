// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mech_msg:msg/Yawerr.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mech_msg/msg/detail/yawerr__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mech_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Yawerr_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mech_msg::msg::Yawerr(_init);
}

void Yawerr_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mech_msg::msg::Yawerr *>(message_memory);
  typed_message->~Yawerr();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Yawerr_message_member_array[1] = {
  {
    "yawerr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mech_msg::msg::Yawerr, yawerr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Yawerr_message_members = {
  "mech_msg::msg",  // message namespace
  "Yawerr",  // message name
  1,  // number of fields
  sizeof(mech_msg::msg::Yawerr),
  Yawerr_message_member_array,  // message members
  Yawerr_init_function,  // function to initialize message memory (memory has to be allocated)
  Yawerr_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Yawerr_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Yawerr_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mech_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mech_msg::msg::Yawerr>()
{
  return &::mech_msg::msg::rosidl_typesupport_introspection_cpp::Yawerr_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mech_msg, msg, Yawerr)() {
  return &::mech_msg::msg::rosidl_typesupport_introspection_cpp::Yawerr_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
