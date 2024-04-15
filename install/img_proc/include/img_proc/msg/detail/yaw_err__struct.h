// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from img_proc:msg/YawErr.idl
// generated code does not contain a copyright notice

#ifndef IMG_PROC__MSG__DETAIL__YAW_ERR__STRUCT_H_
#define IMG_PROC__MSG__DETAIL__YAW_ERR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/YawErr in the package img_proc.
typedef struct img_proc__msg__YawErr
{
  int32_t yaw_err;
} img_proc__msg__YawErr;

// Struct for a sequence of img_proc__msg__YawErr.
typedef struct img_proc__msg__YawErr__Sequence
{
  img_proc__msg__YawErr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} img_proc__msg__YawErr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMG_PROC__MSG__DETAIL__YAW_ERR__STRUCT_H_
