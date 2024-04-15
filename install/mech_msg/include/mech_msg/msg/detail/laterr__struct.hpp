// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mech_msg:msg/Laterr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__LATERR__STRUCT_HPP_
#define MECH_MSG__MSG__DETAIL__LATERR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mech_msg__msg__Laterr __attribute__((deprecated))
#else
# define DEPRECATED__mech_msg__msg__Laterr __declspec(deprecated)
#endif

namespace mech_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Laterr_
{
  using Type = Laterr_<ContainerAllocator>;

  explicit Laterr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laterr = 0l;
    }
  }

  explicit Laterr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laterr = 0l;
    }
  }

  // field types and members
  using _laterr_type =
    int32_t;
  _laterr_type laterr;

  // setters for named parameter idiom
  Type & set__laterr(
    const int32_t & _arg)
  {
    this->laterr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mech_msg::msg::Laterr_<ContainerAllocator> *;
  using ConstRawPtr =
    const mech_msg::msg::Laterr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mech_msg::msg::Laterr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mech_msg::msg::Laterr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mech_msg::msg::Laterr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mech_msg::msg::Laterr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mech_msg::msg::Laterr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mech_msg::msg::Laterr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mech_msg::msg::Laterr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mech_msg::msg::Laterr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mech_msg__msg__Laterr
    std::shared_ptr<mech_msg::msg::Laterr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mech_msg__msg__Laterr
    std::shared_ptr<mech_msg::msg::Laterr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Laterr_ & other) const
  {
    if (this->laterr != other.laterr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Laterr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Laterr_

// alias to use template instance with default allocator
using Laterr =
  mech_msg::msg::Laterr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mech_msg

#endif  // MECH_MSG__MSG__DETAIL__LATERR__STRUCT_HPP_
