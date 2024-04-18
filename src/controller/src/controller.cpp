#include "controller.h"

void Controller::parseParameters()
{   
    //Controller parameters
    this->declare_parameter<float>("Kp");
    this->get_parameter("Kp", Kp_);

    this->declare_parameter<float>("Kd");
    this->get_parameter("Kd", Kd_);

    //Control rate
    this->declare_parameter<int>("controll_rate_ms", 1);
    this->get_parameter("controll_rate_ms", controll_rate_ms_);

    //Servo mappings
    this->declare_parameter<float>("steer_threshold");
    this->get_parameter("steer_threshold", steer_threshold_);

    this->declare_parameter<float>("max_steer");
    this->get_parameter("max_steer", max_steer_);

    this->declare_parameter<float>("min_steer");
    this->get_parameter("min_steer", min_steer_);
}


void Controller::laterr_callback(const mech_msg::msg::Laterr & msg)
{
    lat_err_ = msg.laterr;
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

    // RCLCPP_INFO(this->get_logger(),"Steer Command: %f", steer_cmd_);

    //Publish steer command
    // auto steer_msg = mech_msg::msg::Steer();
    // steer_msg.steer = steer_cmd_;
    // steer_pub_->publish(steer_msg);

    auto steer_msg = std_msgs::msg::Float64();
    steer_msg.data = steer_cmd_;
    // RCLCPP_INFO(this->get_logger(),"Steer Command: %f", steer_msg.data);
    steer_pub_->publish(steer_msg);
}


void Controller::steerController(const float yaw_err_, const float dt)
{
    //Define errors (radians)
    float e = yaw_err_*(pi/180);
    float e_dot = (e - e_old) / dt;

    //Control law
    float u = Kp_*e + Kd_*e_dot;
    
    //Saturate u
    if (u > steer_threshold_)
    {
        u = steer_threshold_;
    }
    if (u < -steer_threshold_)
    {
        u = -steer_threshold_;
    }

    RCLCPP_INFO(this->get_logger(),"u: %f", u);

    //Map to servo commands
    if (e == 0.0)
    {
        steer_cmd_ = 0.5;
    } 
    if (e > 0.0)
    {
        steer_cmd_ = (abs(u)/(steer_threshold_))*max_steer_;
    }
    if (e < 0.0)
    {   
        float delta = min_steer_ - (abs(u)/(steer_threshold_))*min_steer_;

        steer_cmd_ = min_steer_ + delta;
    }

    //Saturate Steering command
    // if (steer_cmd_ > 0.85)
    // {
    //     steer_cmd_ = 0.85;
    // }
    // if (steer_cmd_ < 0.15)
    // {
    //     steer_cmd_ = 0.15;
    // }

    //Store error
    e_old = e;
}