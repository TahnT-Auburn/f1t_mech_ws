#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <opencv2/opencv.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>

class ImageProcessor : public rclcpp::Node
{
public:
    ImageProcessor() : Node("img_proc_node")
    {
        parseParameters();

		subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
			"/camera/color/image_raw", 1,
			std::bind(&ImageProcessor::processImage, this, std::placeholders::_1));
    }
private:
    void parseParameters();
    void processImage(const sensor_msgs::msg::Image::SharedPtr msg);
    void binaryThresholding(cv::Mat& img);
    cv::Mat maskImage(cv::Mat& img);
    void erosionDilation(cv::Mat& img);
    cv::Mat cannyEdgeDetection(cv::Mat& img);
    cv::Mat houghTransform(cv::Mat& img, const cv::Mat& raw_img);
    cv::Mat waypointGen(cv::Mat& img);
    int width_tolerance_;
    float height_scale_;
    // std::vector<double> erode_size_;
    // std::vector<double> dilate_size_;
    int rho_;
    int threshold_;
    int min_line_length_;
    int max_line_gap_;


    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ImageProcessor>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}