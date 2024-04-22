#include "controller.h"

void Controller::parseParameters()
{   
    //Controller types
    this->declare_parameter<bool>("steer_controller");
    this->get_parameter("steer_controller", steer_controller_);

    this->declare_parameter<bool>("throttle_controller");
    this->get_parameter("throttle_controller", throttle_controller_);

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

    //Throttle speed
    this->declare_parameter<float>("throttle_speed");
    this->get_parameter("throttle_speed", throttle_speed_);
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
    //Run steering controller
    float dt = controll_rate_ms_*0.001;
    steerController(yaw_err_, dt);
    
    //Run throttle controller
    throttleController(lat_err_);

    //Publish steering command
    if (steer_controller_)
    {
        auto steer_msg = std_msgs::msg::Float64();
        steer_msg.data = steer_cmd_;
        RCLCPP_INFO(this->get_logger(),"Steer Command: %f", steer_msg.data);
        steer_pub_->publish(steer_msg);
    }
    //Publish throttle command
    if (throttle_controller_)
    {
        auto throttle_msg = std_msgs::msg::Float64();
        throttle_msg.data = throttle_cmd_;
        // RCLCPP_INFO(this->get_logger(),"Throttle Command: %f", throttle_msg.data);
        throttle_pub_->publish(throttle_msg);
    }
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

    float u_perc = u/steer_threshold_;

    steer_cmd_ = 0.5 + (u_perc*0.35);

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

void Controller::throttleController(const float lat_err_)
{
    //SIMPLE constant throttle command for now
    //TO DO: Add in a stop if no waypoints are read (need to publish waypoints)
    //Could maybe throw a P controller if have time

    throttle_cmd_ = throttle_speed_;
}