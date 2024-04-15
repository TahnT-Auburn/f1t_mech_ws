// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from img_proc:msg/YawErr.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "img_proc/msg/rosidl_typesupport_c__visibility_control.h"
#include "img_proc/msg/detail/yaw_err__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace img_proc
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _YawErr_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _YawErr_type_support_ids_t;

static const _YawErr_type_support_ids_t _YawErr_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _YawErr_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _YawErr_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _YawErr_type_support_symbol_names_t _YawErr_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, img_proc, msg, YawErr)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, img_proc, msg, YawErr)),
  }
};

typedef struct _YawErr_type_support_data_t
{
  void * data[2];
} _YawErr_type_support_data_t;

static _YawErr_type_support_data_t _YawErr_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _YawErr_message_typesupport_map = {
  2,
  "img_proc",
  &_YawErr_message_typesupport_ids.typesupport_identifier[0],
  &_YawErr_message_typesupport_symbol_names.symbol_name[0],
  &_YawErr_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t YawErr_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_YawErr_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace img_proc

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_img_proc
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, img_proc, msg, YawErr)() {
  return &::img_proc::msg::rosidl_typesupport_c::YawErr_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
