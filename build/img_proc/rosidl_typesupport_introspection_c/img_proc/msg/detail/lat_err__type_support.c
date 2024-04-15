// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from img_proc:msg/LatErr.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "img_proc/msg/detail/lat_err__rosidl_typesupport_introspection_c.h"
#include "img_proc/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "img_proc/msg/detail/lat_err__functions.h"
#include "img_proc/msg/detail/lat_err__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void LatErr__rosidl_typesupport_introspection_c__LatErr_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  img_proc__msg__LatErr__init(message_memory);
}

void LatErr__rosidl_typesupport_introspection_c__LatErr_fini_function(void * message_memory)
{
  img_proc__msg__LatErr__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LatErr__rosidl_typesupport_introspection_c__LatErr_message_member_array[1] = {
  {
    "lat_err",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(img_proc__msg__LatErr, lat_err),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LatErr__rosidl_typesupport_introspection_c__LatErr_message_members = {
  "img_proc__msg",  // message namespace
  "LatErr",  // message name
  1,  // number of fields
  sizeof(img_proc__msg__LatErr),
  LatErr__rosidl_typesupport_introspection_c__LatErr_message_member_array,  // message members
  LatErr__rosidl_typesupport_introspection_c__LatErr_init_function,  // function to initialize message memory (memory has to be allocated)
  LatErr__rosidl_typesupport_introspection_c__LatErr_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LatErr__rosidl_typesupport_introspection_c__LatErr_message_type_support_handle = {
  0,
  &LatErr__rosidl_typesupport_introspection_c__LatErr_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_img_proc
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, img_proc, msg, LatErr)() {
  if (!LatErr__rosidl_typesupport_introspection_c__LatErr_message_type_support_handle.typesupport_identifier) {
    LatErr__rosidl_typesupport_introspection_c__LatErr_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LatErr__rosidl_typesupport_introspection_c__LatErr_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
