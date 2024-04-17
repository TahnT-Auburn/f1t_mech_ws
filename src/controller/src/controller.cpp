#include "controller.h"

void Controller::parseParameters()
{   
    //Controller parameters
    this->declare_parameter<float>("Kp");
    this->get_parameter("Kp", Kp_);

    this->declare_parameter<float>("Kd");
    this->get_parameter("Kd", Kd_);

    this->declare_parameter<int>("controll_rate_ms", 1);
    this->get_parameter("controll_rate_ms", controll_rate_ms_);
}


void Controller::laterr_callback(const mech_msg::msg::Laterr & msg)
{
    // RCLCPP_INFO_STREAM(this->get_logger(), "Lat Err" << msg.laterr);
}


void Controller::yawerr_callback(const mech_msg::msg::Yawerr & msg)
{
    yaw_err_ = msg.yawerr;
}


void Controller::runController()
{
    //Run controller
    float dt = controll_rate_ms_*0.001;
    steerController(yaw_err_, dt);
    RCLCPP_INFO(this->get_logger(),"Steer Command: %f", steer_cmd_);

    //Publish steer command
    auto steer_msg = mech_msg::msg::Steer();
    steer_msg.steer = steer_cmd_;
    steer_pub_->publish(steer_msg);
}


void Controller::steerController(const float yaw_err_, const float dt)
{
    //Define errors (radians)
    float e = yaw_err_*(pi/180);
    float e_dot = (e - e_old) / dt;

    //Control law
    steer_cmd_ = Kp_*e + Kd_*e_dot;
    
    // RCLCPP_INFO(this->get_logger(),"e: %f", e);
    // RCLCPP_INFO(this->get_logger(),"e_old: %f", e_old);

    //Store error
    e_old = e;
}