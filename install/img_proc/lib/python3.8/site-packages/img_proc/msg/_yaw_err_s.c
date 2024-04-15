// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from img_proc:msg/YawErr.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "img_proc/msg/detail/yaw_err__struct.h"
#include "img_proc/msg/detail/yaw_err__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool img_proc__msg__yaw_err__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("img_proc.msg._yaw_err.YawErr", full_classname_dest, 28) == 0);
  }
  img_proc__msg__YawErr * ros_message = _ros_message;
  {  // yaw_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_err");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yaw_err = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * img_proc__msg__yaw_err__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of YawErr */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("img_proc.msg._yaw_err");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "YawErr");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  img_proc__msg__YawErr * ros_message = (img_proc__msg__YawErr *)raw_ros_message;
  {  // yaw_err
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->yaw_err);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
