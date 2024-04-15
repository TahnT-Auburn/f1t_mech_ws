#include "controller.h"

void Controller::parseParameters()
{   
    //Controller parameters
    this->declare_parameter<float>("Kp");
    this->get_parameter("Kp", Kp_);

    this->declare_parameter<float>("Kd");
    this->get_parameter("Kd", Kd_);

}

void Controller::laterr_callback(const mech_msg::msg::Laterr & msg)
{
    // RCLCPP_INFO_STREAM(this->get_logger(), "Lat Err" << msg.laterr);
}

void Controller::yawerr_callback(const mech_msg::msg::Yawerr & msg)
{
    // RCLCPP_INFO_STREAM(this->get_logger(), "Yaw Err" << msg.yawerr);
    float yaw_err = msg.yawerr;
    
    //Run controller
    float steer_cmd;
    steer_cmd = runController(yaw_err);
}

float Controller::runController(const float yaw_err)
{
    //INSERT CONTROL LAW HERE
    //NOTE Kp and Kd are set as ROS parameters and can be accessed in config
    
}