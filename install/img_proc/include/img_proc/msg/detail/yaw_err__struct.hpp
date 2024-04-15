// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from img_proc:msg/YawErr.idl
// generated code does not contain a copyright notice

#ifndef IMG_PROC__MSG__DETAIL__YAW_ERR__STRUCT_HPP_
#define IMG_PROC__MSG__DETAIL__YAW_ERR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__img_proc__msg__YawErr __attribute__((deprecated))
#else
# define DEPRECATED__img_proc__msg__YawErr __declspec(deprecated)
#endif

namespace img_proc
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YawErr_
{
  using Type = YawErr_<ContainerAllocator>;

  explicit YawErr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_err = 0l;
    }
  }

  explicit YawErr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_err = 0l;
    }
  }

  // field types and members
  using _yaw_err_type =
    int32_t;
  _yaw_err_type yaw_err;

  // setters for named parameter idiom
  Type & set__yaw_err(
    const int32_t & _arg)
  {
    this->yaw_err = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    img_proc::msg::YawErr_<ContainerAllocator> *;
  using ConstRawPtr =
    const img_proc::msg::YawErr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<img_proc::msg::YawErr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<img_proc::msg::YawErr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      img_proc::msg::YawErr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<img_proc::msg::YawErr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      img_proc::msg::YawErr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<img_proc::msg::YawErr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<img_proc::msg::YawErr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<img_proc::msg::YawErr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__img_proc__msg__YawErr
    std::shared_ptr<img_proc::msg::YawErr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__img_proc__msg__YawErr
    std::shared_ptr<img_proc::msg::YawErr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YawErr_ & other) const
  {
    if (this->yaw_err != other.yaw_err) {
      return false;
    }
    return true;
  }
  bool operator!=(const YawErr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YawErr_

// alias to use template instance with default allocator
using YawErr =
  img_proc::msg::YawErr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace img_proc

#endif  // IMG_PROC__MSG__DETAIL__YAW_ERR__STRUCT_HPP_
