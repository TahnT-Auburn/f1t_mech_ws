// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mech_msg:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__TEST__STRUCT_H_
#define MECH_MSG__MSG__DETAIL__TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Test in the package mech_msg.
typedef struct mech_msg__msg__Test
{
  int32_t test;
} mech_msg__msg__Test;

// Struct for a sequence of mech_msg__msg__Test.
typedef struct mech_msg__msg__Test__Sequence
{
  mech_msg__msg__Test * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mech_msg__msg__Test__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MECH_MSG__MSG__DETAIL__TEST__STRUCT_H_
