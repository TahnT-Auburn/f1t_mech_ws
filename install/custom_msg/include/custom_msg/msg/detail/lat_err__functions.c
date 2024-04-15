// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msg:msg/LatErr.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/lat_err__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_msg__msg__LatErr__init(custom_msg__msg__LatErr * msg)
{
  if (!msg) {
    return false;
  }
  // laterr
  return true;
}

void
custom_msg__msg__LatErr__fini(custom_msg__msg__LatErr * msg)
{
  if (!msg) {
    return;
  }
  // laterr
}

bool
custom_msg__msg__LatErr__are_equal(const custom_msg__msg__LatErr * lhs, const custom_msg__msg__LatErr * rhs)
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
custom_msg__msg__LatErr__copy(
  const custom_msg__msg__LatErr * input,
  custom_msg__msg__LatErr * output)
{
  if (!input || !output) {
    return false;
  }
  // laterr
  output->laterr = input->laterr;
  return true;
}

custom_msg__msg__LatErr *
custom_msg__msg__LatErr__create()
{
  custom_msg__msg__LatErr * msg = (custom_msg__msg__LatErr *)malloc(sizeof(custom_msg__msg__LatErr));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msg__msg__LatErr));
  bool success = custom_msg__msg__LatErr__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msg__msg__LatErr__destroy(custom_msg__msg__LatErr * msg)
{
  if (msg) {
    custom_msg__msg__LatErr__fini(msg);
  }
  free(msg);
}


bool
custom_msg__msg__LatErr__Sequence__init(custom_msg__msg__LatErr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msg__msg__LatErr * data = NULL;
  if (size) {
    data = (custom_msg__msg__LatErr *)calloc(size, sizeof(custom_msg__msg__LatErr));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msg__msg__LatErr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msg__msg__LatErr__fini(&data[i - 1]);
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
custom_msg__msg__LatErr__Sequence__fini(custom_msg__msg__LatErr__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msg__msg__LatErr__fini(&array->data[i]);
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

custom_msg__msg__LatErr__Sequence *
custom_msg__msg__LatErr__Sequence__create(size_t size)
{
  custom_msg__msg__LatErr__Sequence * array = (custom_msg__msg__LatErr__Sequence *)malloc(sizeof(custom_msg__msg__LatErr__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msg__msg__LatErr__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msg__msg__LatErr__Sequence__destroy(custom_msg__msg__LatErr__Sequence * array)
{
  if (array) {
    custom_msg__msg__LatErr__Sequence__fini(array);
  }
  free(array);
}

bool
custom_msg__msg__LatErr__Sequence__are_equal(const custom_msg__msg__LatErr__Sequence * lhs, const custom_msg__msg__LatErr__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msg__msg__LatErr__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msg__msg__LatErr__Sequence__copy(
  const custom_msg__msg__LatErr__Sequence * input,
  custom_msg__msg__LatErr__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msg__msg__LatErr);
    custom_msg__msg__LatErr * data =
      (custom_msg__msg__LatErr *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msg__msg__LatErr__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msg__msg__LatErr__fini(&data[i]);
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
    if (!custom_msg__msg__LatErr__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
