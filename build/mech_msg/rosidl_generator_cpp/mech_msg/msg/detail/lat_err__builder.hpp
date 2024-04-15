// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mech_msg:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__LAT_ERR__BUILDER_HPP_
#define MECH_MSG__MSG__DETAIL__LAT_ERR__BUILDER_HPP_

#include "mech_msg/msg/detail/lat_err__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mech_msg
{

namespace msg
{

namespace builder
{

class Init_LatErr_lat_err
{
public:
  Init_LatErr_lat_err()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mech_msg::msg::LatErr lat_err(::mech_msg::msg::LatErr::_lat_err_type arg)
  {
    msg_.lat_err = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mech_msg::msg::LatErr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mech_msg::msg::LatErr>()
{
  return mech_msg::msg::builder::Init_LatErr_lat_err();
}

}  // namespace mech_msg

#endif  // MECH_MSG__MSG__DETAIL__LAT_ERR__BUILDER_HPP_
