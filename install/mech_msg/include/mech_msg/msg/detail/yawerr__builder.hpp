// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mech_msg:msg/Yawerr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__YAWERR__BUILDER_HPP_
#define MECH_MSG__MSG__DETAIL__YAWERR__BUILDER_HPP_

#include "mech_msg/msg/detail/yawerr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mech_msg
{

namespace msg
{

namespace builder
{

class Init_Yawerr_yawerr
{
public:
  Init_Yawerr_yawerr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mech_msg::msg::Yawerr yawerr(::mech_msg::msg::Yawerr::_yawerr_type arg)
  {
    msg_.yawerr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mech_msg::msg::Yawerr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mech_msg::msg::Yawerr>()
{
  return mech_msg::msg::builder::Init_Yawerr_yawerr();
}

}  // namespace mech_msg

#endif  // MECH_MSG__MSG__DETAIL__YAWERR__BUILDER_HPP_
