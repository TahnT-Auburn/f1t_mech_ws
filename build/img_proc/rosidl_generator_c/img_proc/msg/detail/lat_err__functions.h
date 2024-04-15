// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from img_proc:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef IMG_PROC__MSG__DETAIL__LAT_ERR__FUNCTIONS_H_
#define IMG_PROC__MSG__DETAIL__LAT_ERR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "img_proc/msg/rosidl_generator_c__visibility_control.h"

#include "img_proc/msg/detail/lat_err__struct.h"

/// Initialize msg/LatErr message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * img_proc__msg__LatErr
 * )) before or use
 * img_proc__msg__LatErr__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__LatErr__init(img_proc__msg__LatErr * msg);

/// Finalize msg/LatErr message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__LatErr__fini(img_proc__msg__LatErr * msg);

/// Create msg/LatErr message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * img_proc__msg__LatErr__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
img_proc__msg__LatErr *
img_proc__msg__LatErr__create();

/// Destroy msg/LatErr message.
/**
 * It calls
 * img_proc__msg__LatErr__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__LatErr__destroy(img_proc__msg__LatErr * msg);

/// Check for msg/LatErr message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__LatErr__are_equal(const img_proc__msg__LatErr * lhs, const img_proc__msg__LatErr * rhs);

/// Copy a msg/LatErr message.
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
img_proc__msg__LatErr__copy(
  const img_proc__msg__LatErr * input,
  img_proc__msg__LatErr * output);

/// Initialize array of msg/LatErr messages.
/**
 * It allocates the memory for the number of elements and calls
 * img_proc__msg__LatErr__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__LatErr__Sequence__init(img_proc__msg__LatErr__Sequence * array, size_t size);

/// Finalize array of msg/LatErr messages.
/**
 * It calls
 * img_proc__msg__LatErr__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__LatErr__Sequence__fini(img_proc__msg__LatErr__Sequence * array);

/// Create array of msg/LatErr messages.
/**
 * It allocates the memory for the array and calls
 * img_proc__msg__LatErr__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
img_proc__msg__LatErr__Sequence *
img_proc__msg__LatErr__Sequence__create(size_t size);

/// Destroy array of msg/LatErr messages.
/**
 * It calls
 * img_proc__msg__LatErr__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
void
img_proc__msg__LatErr__Sequence__destroy(img_proc__msg__LatErr__Sequence * array);

/// Check for msg/LatErr message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_img_proc
bool
img_proc__msg__LatErr__Sequence__are_equal(const img_proc__msg__LatErr__Sequence * lhs, const img_proc__msg__LatErr__Sequence * rhs);

/// Copy an array of msg/LatErr messages.
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
img_proc__msg__LatErr__Sequence__copy(
  const img_proc__msg__LatErr__Sequence * input,
  img_proc__msg__LatErr__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMG_PROC__MSG__DETAIL__LAT_ERR__FUNCTIONS_H_
