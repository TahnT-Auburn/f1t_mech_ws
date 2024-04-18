#include <functional>
#include <memory>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
#include "mech_msg/msg/laterr.hpp"
#include "mech_msg/msg/yawerr.hpp"
#include "mech_msg/msg/steer.hpp"

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

    steer_pub_ = this->create_publisher<mech_msg::msg::Steer>(
        "steer", 10);

    controller_timer_ = this->create_wall_timer(std::chrono::milliseconds(controll_rate_ms_),
        std::bind(&Controller::runController, this));
}
private:
    void parseParameters();
    void laterr_callback(const mech_msg::msg::Laterr & msg);
    void yawerr_callback(const mech_msg::msg::Yawerr & msg);
    void runController();
    void steerController(const float yaw_err, float dt);

    float Kp_, Kd_;
    int controll_rate_ms_;
    float lat_err_, yaw_err_;
    float steer_cmd_;
    float steer_threshold_, max_steer_, min_steer_;

    rclcpp::Subscription<mech_msg::msg::Laterr>::SharedPtr laterr_sub_;
    rclcpp::Subscription<mech_msg::msg::Yawerr>::SharedPtr yawerr_sub_;
    rclcpp::Publisher<mech_msg::msg::Steer>::SharedPtr steer_pub_;

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