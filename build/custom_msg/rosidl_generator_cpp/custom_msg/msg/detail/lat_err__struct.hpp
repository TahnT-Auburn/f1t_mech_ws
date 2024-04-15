// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LAT_ERR__STRUCT_HPP_
#define CUSTOM_MSG__MSG__DETAIL__LAT_ERR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msg__msg__LatErr __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg__msg__LatErr __declspec(deprecated)
#endif

namespace custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LatErr_
{
  using Type = LatErr_<ContainerAllocator>;

  explicit LatErr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laterr = 0ll;
    }
  }

  explicit LatErr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laterr = 0ll;
    }
  }

  // field types and members
  using _laterr_type =
    int64_t;
  _laterr_type laterr;

  // setters for named parameter idiom
  Type & set__laterr(
    const int64_t & _arg)
  {
    this->laterr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg::msg::LatErr_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg::msg::LatErr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg::msg::LatErr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg::msg::LatErr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::LatErr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::LatErr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::LatErr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::LatErr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg::msg::LatErr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg::msg::LatErr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg__msg__LatErr
    std::shared_ptr<custom_msg::msg::LatErr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg__msg__LatErr
    std::shared_ptr<custom_msg::msg::LatErr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LatErr_ & other) const
  {
    if (this->laterr != other.laterr) {
      return false;
    }
    return true;
  }
  bool operator!=(const LatErr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LatErr_

// alias to use template instance with default allocator
using LatErr =
  custom_msg::msg::LatErr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__LAT_ERR__STRUCT_HPP_
