// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mech_msg:msg/YawErr.idl
// generated code does not contain a copyright notice
#include "mech_msg/msg/detail/yaw_err__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mech_msg__msg__YawErr__init(mech_msg__msg__YawErr * msg)
{
  if (!msg) {
    return false;
  }
  // yaw_err
  return true;
}

void
mech_msg__msg__YawErr__fini(mech_msg__msg__YawErr * msg)
{
  if (!msg) {
    return;
  }
  // yaw_err
}

bool
mech_msg__msg__YawErr__are_equal(const mech_msg__msg__YawErr * lhs, const mech_msg__msg__YawErr * rhs)
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
mech_msg__msg__YawErr__copy(
  const mech_msg__msg__YawErr * input,
  mech_msg__msg__YawErr * output)
{
  if (!input || !output) {
    return false;
  }
  // yaw_err
  output->yaw_err = input->yaw_err;
  return true;
}

mech_msg__msg__YawErr *
mech_msg__msg__YawErr__create()
{
  mech_msg__msg__YawErr * msg = (mech_msg__msg__YawErr *)malloc(sizeof(mech_msg__msg__YawErr));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mech_msg__msg__YawErr));
  bool success = mech_msg__msg__YawErr__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mech_msg__msg__YawErr__destroy(mech_msg__msg__YawErr * msg)
{
  if (msg) {
    mech_msg__msg__YawErr__fini(msg);
  }
  free(msg);
}


bool
mech_msg__msg__YawErr__Sequence__init(mech_msg__msg__YawErr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mech_msg__msg__YawErr * data = NULL;
  if (size) {
    data = (mech_msg__msg__YawErr *)calloc(size, sizeof(mech_msg__msg__YawErr));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mech_msg__msg__YawErr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mech_msg__msg__YawErr__fini(&data[i - 1]);
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
mech_msg__msg__YawErr__Sequence__fini(mech_msg__msg__YawErr__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mech_msg__msg__YawErr__fini(&array->data[i]);
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

mech_msg__msg__YawErr__Sequence *
mech_msg__msg__YawErr__Sequence__create(size_t size)
{
  mech_msg__msg__YawErr__Sequence * array = (mech_msg__msg__YawErr__Sequence *)malloc(sizeof(mech_msg__msg__YawErr__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mech_msg__msg__YawErr__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mech_msg__msg__YawErr__Sequence__destroy(mech_msg__msg__YawErr__Sequence * array)
{
  if (array) {
    mech_msg__msg__YawErr__Sequence__fini(array);
  }
  free(array);
}

bool
mech_msg__msg__YawErr__Sequence__are_equal(const mech_msg__msg__YawErr__Sequence * lhs, const mech_msg__msg__YawErr__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mech_msg__msg__YawErr__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mech_msg__msg__YawErr__Sequence__copy(
  const mech_msg__msg__YawErr__Sequence * input,
  mech_msg__msg__YawErr__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mech_msg__msg__YawErr);
    mech_msg__msg__YawErr * data =
      (mech_msg__msg__YawErr *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mech_msg__msg__YawErr__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mech_msg__msg__YawErr__fini(&data[i]);
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
    if (!mech_msg__msg__YawErr__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
