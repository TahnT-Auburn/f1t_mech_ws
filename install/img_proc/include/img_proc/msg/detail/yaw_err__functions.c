// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from img_proc:msg/YawErr.idl
// generated code does not contain a copyright notice
#include "img_proc/msg/detail/yaw_err__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
img_proc__msg__YawErr__init(img_proc__msg__YawErr * msg)
{
  if (!msg) {
    return false;
  }
  // yaw_err
  return true;
}

void
img_proc__msg__YawErr__fini(img_proc__msg__YawErr * msg)
{
  if (!msg) {
    return;
  }
  // yaw_err
}

bool
img_proc__msg__YawErr__are_equal(const img_proc__msg__YawErr * lhs, const img_proc__msg__YawErr * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // yaw_err
  if (lhs->yaw_err != rhs->yaw_err) {
    return false;
  }
  return true;
}

bool
img_proc__msg__YawErr__copy(
  const img_proc__msg__YawErr * input,
  img_proc__msg__YawErr * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw_err
  output->yaw_err = input->yaw_err;
  return true;
}

img_proc__msg__YawErr *
img_proc__msg__YawErr__create()
{
  img_proc__msg__YawErr * msg = (img_proc__msg__YawErr *)malloc(sizeof(img_proc__msg__YawErr));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(img_proc__msg__YawErr));
  bool success = img_proc__msg__YawErr__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
img_proc__msg__YawErr__destroy(img_proc__msg__YawErr * msg)
{
  if (msg) {
    img_proc__msg__YawErr__fini(msg);
  }
  free(msg);
}


bool
img_proc__msg__YawErr__Sequence__init(img_proc__msg__YawErr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  img_proc__msg__YawErr * data = NULL;
  if (size) {
    data = (img_proc__msg__YawErr *)calloc(size, sizeof(img_proc__msg__YawErr));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = img_proc__msg__YawErr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        img_proc__msg__YawErr__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
img_proc__msg__YawErr__Sequence__fini(img_proc__msg__YawErr__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      img_proc__msg__YawErr__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

img_proc__msg__YawErr__Sequence *
img_proc__msg__YawErr__Sequence__create(size_t size)
{
  img_proc__msg__YawErr__Sequence * array = (img_proc__msg__YawErr__Sequence *)malloc(sizeof(img_proc__msg__YawErr__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = img_proc__msg__YawErr__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
img_proc__msg__YawErr__Sequence__destroy(img_proc__msg__YawErr__Sequence * array)
{
  if (array) {
    img_proc__msg__YawErr__Sequence__fini(array);
  }
  free(array);
}

bool
img_proc__msg__YawErr__Sequence__are_equal(const img_proc__msg__YawErr__Sequence * lhs, const img_proc__msg__YawErr__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!img_proc__msg__YawErr__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
img_proc__msg__YawErr__Sequence__copy(
  const img_proc__msg__YawErr__Sequence * input,
  img_proc__msg__YawErr__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(img_proc__msg__YawErr);
    img_proc__msg__YawErr * data =
      (img_proc__msg__YawErr *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!img_proc__msg__YawErr__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          img_proc__msg__YawErr__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!img_proc__msg__YawErr__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
