#include <chrono>
#include <functional>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include "mech_msg/msg/laterr.hpp"
#include "mech_msg/msg/yawerr.hpp"
// #include <std_msgs/msg/int32.hpp>
// #include <std_msgs/msg/float32.hpp>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <cmath>


class ImageProcessor : public rclcpp::Node
{
public:
    ImageProcessor() : Node("img_proc_node")
    {
        parseParameters();

		subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
			"/camera/color/image_raw", 1,
			std::bind(&ImageProcessor::processImage, this, std::placeholders::_1));
        
        publisher_le_ = this->create_publisher<mech_msg::msg::Laterr>("lat_err",10);
        publisher_ye_ = this->create_publisher<mech_msg::msg::Yawerr>("yaw_err",10);
    }
private:
    void parseParameters();
    void processImage(const sensor_msgs::msg::Image::SharedPtr msg);
    void binaryThresholding(cv::Mat& img);
    cv::Mat maskImage(cv::Mat& img);
    void erosionDilation(cv::Mat& img);
    cv::Mat cannyEdgeDetection(cv::Mat& img);
    cv::Mat houghTransform(cv::Mat& img, const cv::Mat& raw_img);
    cv::Point waypointGen(cv::Mat& img);
    int latErrorGen(const cv::Mat& img, const cv::Point waypoint);
    float yawErrorGen(int lat_err);

    int width_tolerance_;
    float height_scale_;
    int rho_;
    int threshold_;
    int min_line_length_;
    int max_line_gap_;
    int look_dist_;


    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
    rclcpp::Publisher<mech_msg::msg::Laterr>::SharedPtr publisher_le_;
    rclcpp::Publisher<mech_msg::msg::Yawerr>::SharedPtr publisher_ye_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ImageProcessor>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}