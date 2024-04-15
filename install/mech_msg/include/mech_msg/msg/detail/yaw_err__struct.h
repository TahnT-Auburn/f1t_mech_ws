// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mech_msg:msg/YawErr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__YAW_ERR__STRUCT_H_
#define MECH_MSG__MSG__DETAIL__YAW_ERR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/YawErr in the package mech_msg.
typedef struct mech_msg__msg__YawErr
{
  float yaw_err;
} mech_msg__msg__YawErr;

// Struct for a sequence of mech_msg__msg__YawErr.
typedef struct mech_msg__msg__YawErr__Sequence
{
  mech_msg__msg__YawErr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mech_msg__msg__YawErr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECH_MSG__MSG__DETAIL__YAW_ERR__STRUCT_H_
