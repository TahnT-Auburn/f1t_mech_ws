// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mech_msg:msg/Test.idl
// generated code does not contain a copyright notice

#ifndef MECH_MSG__MSG__DETAIL__TEST__BUILDER_HPP_
#define MECH_MSG__MSG__DETAIL__TEST__BUILDER_HPP_

#include "mech_msg/msg/detail/test__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mech_msg
{

namespace msg
{

namespace builder
{

class Init_Test_test
{
public:
  Init_Test_test()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mech_msg::msg::Test test(::mech_msg::msg::Test::_test_type arg)
  {
    msg_.test = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mech_msg::msg::Test msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mech_msg::msg::Test>()
{
  return mech_msg::msg::builder::Init_Test_test();
}

}  // namespace mech_msg

#endif  // MECH_MSG__MSG__DETAIL__TEST__BUILDER_HPP_
