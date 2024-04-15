// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from img_proc:msg/YawErr.idl
// generated code does not contain a copyright notice

#ifndef IMG_PROC__MSG__DETAIL__YAW_ERR__BUILDER_HPP_
#define IMG_PROC__MSG__DETAIL__YAW_ERR__BUILDER_HPP_

#include "img_proc/msg/detail/yaw_err__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace img_proc
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
  ::img_proc::msg::YawErr yaw_err(::img_proc::msg::YawErr::_yaw_err_type arg)
  {
    msg_.yaw_err = std::move(arg);
    return std::move(msg_);
  }

private:
  ::img_proc::msg::YawErr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_proc::msg::YawErr>()
{
  return img_proc::msg::builder::Init_YawErr_yaw_err();
}

}  // namespace img_proc

#endif  // IMG_PROC__MSG__DETAIL__YAW_ERR__BUILDER_HPP_
