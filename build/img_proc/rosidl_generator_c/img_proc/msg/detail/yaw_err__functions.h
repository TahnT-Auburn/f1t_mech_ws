// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from img_proc:msg/YawErr.idl
// generated code does not contain a copyright notice

#ifndef IMG_PROC__MSG__DETAIL__YAW_ERR__FUNCTIONS_H_
#define IMG_PROC__MSG__DETAIL__YAW_ERR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "img_proc/msg/rosidl_generator_c__visibility_control.h"

#include "img_proc/msg/detail/yaw_err__struct.h"

/// Initialize msg/YawErr message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * img_proc__msg__YawErr
 * )) before or use
 * img_proc__msg__YawErr__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__YawErr__init(img_proc__msg__YawErr * msg);

/// Finalize msg/YawErr message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__YawErr__fini(img_proc__msg__YawErr * msg);

/// Create msg/YawErr message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * img_proc__msg__YawErr__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
img_proc__msg__YawErr *
img_proc__msg__YawErr__create();

/// Destroy msg/YawErr message.
/**
 * It calls
 * img_proc__msg__YawErr__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__YawErr__destroy(img_proc__msg__YawErr * msg);

/// Check for msg/YawErr message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__YawErr__are_equal(const img_proc__msg__YawErr * lhs, const img_proc__msg__YawErr * rhs);

/// Copy a msg/YawErr message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__YawErr__copy(
  const img_proc__msg__YawErr * input,
  img_proc__msg__YawErr * output);

/// Initialize array of msg/YawErr messages.
/**
 * It allocates the memory for the number of elements and calls
 * img_proc__msg__YawErr__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__YawErr__Sequence__init(img_proc__msg__YawErr__Sequence * array, size_t size);

/// Finalize array of msg/YawErr messages.
/**
 * It calls
 * img_proc__msg__YawErr__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__YawErr__Sequence__fini(img_proc__msg__YawErr__Sequence * array);

/// Create array of msg/YawErr messages.
/**
 * It allocates the memory for the array and calls
 * img_proc__msg__YawErr__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
img_proc__msg__YawErr__Sequence *
img_proc__msg__YawErr__Sequence__create(size_t size);

/// Destroy array of msg/YawErr messages.
/**
 * It calls
 * img_proc__msg__YawErr__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__YawErr__Sequence__destroy(img_proc__msg__YawErr__Sequence * array);

/// Check for msg/YawErr message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__YawErr__Sequence__are_equal(const img_proc__msg__YawErr__Sequence * lhs, const img_proc__msg__YawErr__Sequence * rhs);

/// Copy an array of msg/YawErr messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__YawErr__Sequence__copy(
  const img_proc__msg__YawErr__Sequence * input,
  img_proc__msg__YawErr__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMG_PROC__MSG__DETAIL__YAW_ERR__FUNCTIONS_H_
