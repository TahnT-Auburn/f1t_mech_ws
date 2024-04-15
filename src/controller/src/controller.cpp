#include "controller.h"

void Controller::parseParameters()
{
    this->declare_parameter<std::string>("test");
    this->get_parameter("test", test_);

    RCLCPP_INFO(this->get_logger(),"Test: %s", test_.c_str());
}

void Controller::laterr_callback(const mech_msg::msg::Laterr & msg)
{
    RCLCPP_INFO_STREAM(this->get_logger(), "Lat Err" << msg.laterr);
}

void Controller::yawerr_callback(const mech_msg::msg::Yawerr & msg)
{
    RCLCPP_INFO_STREAM(this->get_logger(), "Yaw Err" << msg.yawerr);
}