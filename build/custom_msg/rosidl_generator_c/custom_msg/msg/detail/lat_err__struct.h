// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LAT_ERR__STRUCT_H_
#define CUSTOM_MSG__MSG__DETAIL__LAT_ERR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/LatErr in the package custom_msg.
typedef struct custom_msg__msg__LatErr
{
  int64_t laterr;
} custom_msg__msg__LatErr;

// Struct for a sequence of custom_msg__msg__LatErr.
typedef struct custom_msg__msg__LatErr__Sequence
{
  custom_msg__msg__LatErr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__msg__LatErr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__LAT_ERR__STRUCT_H_
