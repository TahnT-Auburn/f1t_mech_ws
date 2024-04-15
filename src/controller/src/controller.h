#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "mech_msg/msg/laterr.hpp"
#include "mech_msg/msg/yawerr.hpp"

class Controller : public rclcpp::Node
{
public: Controller() : Node("controller")
{   
    parseParameters();

    lat_err_sub_ = this->create_subscription<mech_msg::msg::Laterr>(
        "lat_err", 10,
        std::bind(&Controller::laterr_callback, this, std::placeholders::_1));

    yaw_err_sub_ = this->create_subscription<mech_msg::msg::Yawerr>(
        "yaw_err", 10,
        std::bind(&Controller::yawerr_callback, this, std::placeholders::_1));
}
private:
    void parseParameters();
    void laterr_callback(const mech_msg::msg::Laterr & msg);
    void yawerr_callback(const mech_msg::msg::Yawerr & msg);

    std::string test_;

    rclcpp::Subscription<mech_msg::msg::Laterr>::SharedPtr lat_err_sub_;
    rclcpp::Subscription<mech_msg::msg::Yawerr>::SharedPtr yaw_err_sub_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Controller>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}