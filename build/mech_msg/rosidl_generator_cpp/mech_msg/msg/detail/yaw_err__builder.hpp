// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mech_msg:msg/YawErr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__YAW_ERR__BUILDER_HPP_
#define MECH_MSG__MSG__DETAIL__YAW_ERR__BUILDER_HPP_

#include "mech_msg/msg/detail/yaw_err__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mech_msg
{

namespace msg
{

namespace builder
{

class Init_YawErr_yaw_err
{
public:
  Init_YawErr_yaw_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mech_msg::msg::YawErr yaw_err(::mech_msg::msg::YawErr::_yaw_err_type arg)
  {
    msg_.yaw_err = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mech_msg::msg::YawErr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mech_msg::msg::YawErr>()
{
  return mech_msg::msg::builder::Init_YawErr_yaw_err();
}

}  // namespace mech_msg

#endif  // MECH_MSG__MSG__DETAIL__YAW_ERR__BUILDER_HPP_
