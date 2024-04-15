// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mech_msg:msg/Laterr.idl
// generated code does not contain a copyright notice
#include "mech_msg/msg/detail/laterr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mech_msg__msg__Laterr__init(mech_msg__msg__Laterr * msg)
{
  if (!msg) {
    return false;
  }
  // laterr
  return true;
}

void
mech_msg__msg__Laterr__fini(mech_msg__msg__Laterr * msg)
{
  if (!msg) {
    return;
  }
  // laterr
}

bool
mech_msg__msg__Laterr__are_equal(const mech_msg__msg__Laterr * lhs, const mech_msg__msg__Laterr * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laterr
  if (lhs->laterr != rhs->laterr) {
    return false;
  }
  return true;
}

bool
mech_msg__msg__Laterr__copy(
  const mech_msg__msg__Laterr * input,
  mech_msg__msg__Laterr * output)
{
  if (!input || !output) {
    return false;
  }
  // laterr
  output->laterr = input->laterr;
  return true;
}

mech_msg__msg__Laterr *
mech_msg__msg__Laterr__create()
{
  mech_msg__msg__Laterr * msg = (mech_msg__msg__Laterr *)malloc(sizeof(mech_msg__msg__Laterr));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mech_msg__msg__Laterr));
  bool success = mech_msg__msg__Laterr__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mech_msg__msg__Laterr__destroy(mech_msg__msg__Laterr * msg)
{
  if (msg) {
    mech_msg__msg__Laterr__fini(msg);
  }
  free(msg);
}


bool
mech_msg__msg__Laterr__Sequence__init(mech_msg__msg__Laterr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mech_msg__msg__Laterr * data = NULL;
  if (size) {
    data = (mech_msg__msg__Laterr *)calloc(size, sizeof(mech_msg__msg__Laterr));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mech_msg__msg__Laterr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mech_msg__msg__Laterr__fini(&data[i - 1]);
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
mech_msg__msg__Laterr__Sequence__fini(mech_msg__msg__Laterr__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mech_msg__msg__Laterr__fini(&array->data[i]);
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

mech_msg__msg__Laterr__Sequence *
mech_msg__msg__Laterr__Sequence__create(size_t size)
{
  mech_msg__msg__Laterr__Sequence * array = (mech_msg__msg__Laterr__Sequence *)malloc(sizeof(mech_msg__msg__Laterr__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mech_msg__msg__Laterr__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mech_msg__msg__Laterr__Sequence__destroy(mech_msg__msg__Laterr__Sequence * array)
{
  if (array) {
    mech_msg__msg__Laterr__Sequence__fini(array);
  }
  free(array);
}

bool
mech_msg__msg__Laterr__Sequence__are_equal(const mech_msg__msg__Laterr__Sequence * lhs, const mech_msg__msg__Laterr__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mech_msg__msg__Laterr__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mech_msg__msg__Laterr__Sequence__copy(
  const mech_msg__msg__Laterr__Sequence * input,
  mech_msg__msg__Laterr__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mech_msg__msg__Laterr);
    mech_msg__msg__Laterr * data =
      (mech_msg__msg__Laterr *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mech_msg__msg__Laterr__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mech_msg__msg__Laterr__fini(&data[i]);
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
    if (!mech_msg__msg__Laterr__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
