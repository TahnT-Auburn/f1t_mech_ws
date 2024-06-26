#include <functional>
#include <memory>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
#include "mech_msg/msg/laterr.hpp"
#include "mech_msg/msg/yawerr.hpp"

#define pi 3.1415926
float e_old = 0.0;

using namespace std::chrono_literals;

class Controller : public rclcpp::Node
{
public: Controller() : Node("controller")
{   
    parseParameters();

    laterr_sub_ = this->create_subscription<mech_msg::msg::Laterr>(
        "laterr", 10,
        std::bind(&Controller::laterr_callback, this, std::placeholders::_1));

    yawerr_sub_ = this->create_subscription<mech_msg::msg::Yawerr>(
        "yawerr", 10,
        std::bind(&Controller::yawerr_callback, this, std::placeholders::_1));

    steer_pub_ = this->create_publisher<std_msgs::msg::Float64>(
        "commands/servo/position", 10);
    
    throttle_pub_ = this->create_publisher<std_msgs::msg::Float64>(
        "commands/motor/speed", 10);

    controller_timer_ = this->create_wall_timer(std::chrono::milliseconds(controll_rate_ms_),
        std::bind(&Controller::runController, this));
}
private:
    void parseParameters();
    void laterr_callback(const mech_msg::msg::Laterr & msg);
    void yawerr_callback(const mech_msg::msg::Yawerr & msg);
    void runController();
    void steerController(const float yaw_err, float dt);
    void throttleController(const float lat_err_);

    float Kp_, Kd_;
    int controll_rate_ms_;
    float lat_err_, yaw_err_;
    bool steer_controller_, throttle_controller_;
    float steer_cmd_, throttle_cmd_;
    float steer_threshold_, max_steer_, min_steer_;
    float throttle_speed_;
    
    rclcpp::Subscription<mech_msg::msg::Laterr>::SharedPtr laterr_sub_;
    rclcpp::Subscription<mech_msg::msg::Yawerr>::SharedPtr yawerr_sub_;

    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr steer_pub_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr throttle_pub_;

    rclcpp::TimerBase::SharedPtr controller_timer_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Controller>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}