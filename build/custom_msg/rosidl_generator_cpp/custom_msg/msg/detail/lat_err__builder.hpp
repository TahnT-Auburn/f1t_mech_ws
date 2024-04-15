// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__LAT_ERR__BUILDER_HPP_
#define CUSTOM_MSG__MSG__DETAIL__LAT_ERR__BUILDER_HPP_

#include "custom_msg/msg/detail/lat_err__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msg
{

namespace msg
{

namespace builder
{

class Init_LatErr_laterr
{
public:
  Init_LatErr_laterr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msg::msg::LatErr laterr(::custom_msg::msg::LatErr::_laterr_type arg)
  {
    msg_.laterr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::msg::LatErr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::msg::LatErr>()
{
  return custom_msg::msg::builder::Init_LatErr_laterr();
}

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__LAT_ERR__BUILDER_HPP_
