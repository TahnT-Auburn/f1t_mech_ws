// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from img_proc:msg/LatErr.idl
// generated code does not contain a copyright notice

#ifndef IMG_PROC__MSG__DETAIL__LAT_ERR__BUILDER_HPP_
#define IMG_PROC__MSG__DETAIL__LAT_ERR__BUILDER_HPP_

#include "img_proc/msg/detail/lat_err__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace img_proc
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
  ::img_proc::msg::LatErr lat_err(::img_proc::msg::LatErr::_lat_err_type arg)
  {
    msg_.lat_err = std::move(arg);
    return std::move(msg_);
  }

private:
  ::img_proc::msg::LatErr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::img_proc::msg::LatErr>()
{
  return img_proc::msg::builder::Init_LatErr_lat_err();
}

}  // namespace img_proc

#endif  // IMG_PROC__MSG__DETAIL__LAT_ERR__BUILDER_HPP_
