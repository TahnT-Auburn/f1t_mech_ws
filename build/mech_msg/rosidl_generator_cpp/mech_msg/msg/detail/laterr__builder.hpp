// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mech_msg:msg/Laterr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__LATERR__BUILDER_HPP_
#define MECH_MSG__MSG__DETAIL__LATERR__BUILDER_HPP_

#include "mech_msg/msg/detail/laterr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mech_msg
{

namespace msg
{

namespace builder
{

class Init_Laterr_laterr
{
public:
  Init_Laterr_laterr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mech_msg::msg::Laterr laterr(::mech_msg::msg::Laterr::_laterr_type arg)
  {
    msg_.laterr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mech_msg::msg::Laterr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mech_msg::msg::Laterr>()
{
  return mech_msg::msg::builder::Init_Laterr_laterr();
}

}  // namespace mech_msg

#endif  // MECH_MSG__MSG__DETAIL__LATERR__BUILDER_HPP_
