#include "img_proc_node.h"

void ImageProcessor::parseParameters()
{       
    //Publisher rate
    this->declare_parameter<int>("pub_rate_ms", 1);
    this->get_parameter("pub_rate_ms", pub_rate_);

    //Mask parameters
    this->declare_parameter<int>("width_tolerance");
    this->get_parameter("width_tolerance", width_tolerance_);

    this->declare_parameter<float>("height_scale");
    this->get_parameter("height_scale", height_scale_);

    //Hough transform parameters
    this->declare_parameter<int>("rho");
    this->get_parameter("rho", rho_);

    this->declare_parameter<int>("threshold");
    this->get_parameter("threshold", threshold_);

    this->declare_parameter<int>("min_line_length");
    this->get_parameter("min_line_length", min_line_length_);

    this->declare_parameter<int>("max_line_gap");
    this->get_parameter("max_line_gap", max_line_gap_);

    //Waypoint parameters
    this->declare_parameter<int>("look_dist");
    this->get_parameter("look_dist", look_dist_);

    this->declare_parameter<int>("delta_wp_tolerance");
    this->get_parameter("delta_wp_tolerance", delta_wp_tolerance_);

    //Region of interest parameters
    this->declare_parameter<int>("roi_width");
    this->get_parameter("roi_width", roi_width_);

    this->declare_parameter<int>("roi_height");
    this->get_parameter("roi_height", roi_height_);
}


void ImageProcessor::processImage(const sensor_msgs::msg::Image::SharedPtr msg)
{
    try
    {   
        //Convert to cv image
        cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        cv::Mat raw_img = cv_ptr->image;
        cv::Mat raw_copy1 = raw_img.clone();

        //Binary thresholding
        binaryThresholding(raw_copy1);

        //Masking
        cv::Mat mask;
        mask = maskImage(raw_copy1);

        //Waypoint Gen
        cv::Point waypoint;
        waypoint = waypointGen(raw_copy1);
        bool check(cv::Point& waypoint);

        // RCLCPP_INFO(this->get_logger(),"waypoints: %d %d", waypoint.x, waypoint.y);

        // std::cout << std::boolalpha << "Receiving waypoints: "<< check << std::endl;
        //Lateral error
        lat_err_ = latErrorGen(raw_img, waypoint);

        //Yaw error
        yaw_err_ = yawErrorGen(lat_err_);
        
        //Publish
        // mech_msg::msg::LatErr lat_err_msg;
        // mech_msg::msg::yawErr yaw_err_msg;

        // lat_err_msg.lat_err = lat_err;
        // yaw_err_msg.yaw_err = yaw_err;

        // lat_err_msg.header.stamp = get_clock()->now();
        // yaw_err_msg.header.stamp = get_clock()->now();

        //Draw on Original Image
        cv::circle(raw_img, waypoint, 10, cv::Scalar(0,0,255), 2);
        cv::Point origin = cv::Point(raw_img.size().width/2,raw_img.size().height);
        cv::arrowedLine(raw_img, origin, waypoint, cv::Scalar(0,0,255),2,8,0,0.05);
        cv::arrowedLine(raw_img, origin, cv::Point(origin.x,origin.y-30), cv::Scalar(255,255,255),2);

        //Region of interest
        int roi_x, roi_y;
        roi_x = (raw_img.size().width/2) - (roi_width_/2);
        roi_y = look_dist_ - (roi_height_/2);
        if (roi_x < 0)
        {
            roi_x = 0;
        }
        if (roi_y < 0)
        {
            roi_y = 0;
        }
        if (roi_x > raw_img.size().width)
        {
            roi_x = raw_img.size().width;
        }
        if (roi_y > raw_img.size().height)
        {
            roi_y = raw_img.size().height;
        }
        cv::Rect regionRect(roi_x, roi_y, roi_width_, roi_height_);
        cv::rectangle(raw_img, regionRect, cv::Scalar(255,0,0), 2);

        //Display
        // cv::imshow("Raw", raw_img);
        // cv::waitKey(1);

        // cv::imshow("Binary Thresholding", raw_copy1);
        // cv::waitKey(1);
        // cv::imshow("Mask", mask);
        // cv::waitKey(1);
 
    }   
    catch(cv_bridge::Exception& e)
    {
		RCLCPP_ERROR(this->get_logger(),"CV Bridge Error: %s", e.what());
    }
    
}


void ImageProcessor::pubCallback()
{   
    //Publish error
    auto lat_err_msg = mech_msg::msg::Laterr();
    auto yaw_err_msg = mech_msg::msg::Yawerr();

    lat_err_msg.laterr = lat_err_;
    yaw_err_msg.yawerr = yaw_err_;

    //Test
    // RCLCPP_INFO_STREAM(this->get_logger(), "Publishing: " << yaw_err_msg.yawerr);

    lat_err_pub->publish(lat_err_msg);
    yaw_err_pub->publish(yaw_err_msg);
}


void ImageProcessor::binaryThresholding(cv::Mat& img)
{
    cv::Mat hsv_img;

    cv::cvtColor(img, hsv_img, cv::COLOR_BGR2HSV);
    // cv::Scalar hsv_min(79,38,126);
    // cv::Scalar hsv_max(132,155,256);
    cv::Scalar hsv_min(87,143,0);
    cv::Scalar hsv_max(113,256,256);

    cv::inRange(hsv_img, hsv_min, hsv_max, img);
}


cv::Mat ImageProcessor::maskImage(cv::Mat& img)
{
    //Generate mask
    cv::Mat mask(img.size().height, img.size().width, CV_8UC1, cv::Scalar(0));

    //Define boundary points
    cv::Point p1 = cv::Point(0, img.size().height);                                                         //Bottom-Left
    cv::Point p2 = cv::Point(img.size().width/2 - width_tolerance_, img.size().height*height_scale_);       //Top-Left
    cv::Point p3 = cv::Point(img.size().width/2 + width_tolerance_, img.size().height*height_scale_);       //Top-Right
    cv::Point p4 = cv::Point(img.size().width, img.size().height);                                          //Bottom-Right

    //Fill mask
    cv::Point vertice_points[] = {p1, p2, p3, p4};
    std::vector<cv::Point> vertices(vertice_points, vertice_points + sizeof(vertice_points) / sizeof(cv::Point));
    std::vector<std::vector<cv::Point>> vertices_to_fill;
    vertices_to_fill.push_back(vertices);
    cv::fillPoly(mask, vertices_to_fill, cv::Scalar(255));

    //Apply mask
    cv::bitwise_and(img, mask, img);

    return mask;    
}


void ImageProcessor::erosionDilation(cv::Mat& img)
{   
    cv::Mat eros_elem=cv::getStructuringElement(cv::MORPH_RECT,cv::Size(3,3));
    cv::Mat dial_elem=cv::getStructuringElement(cv::MORPH_RECT,cv::Size(3,3));
    cv::dilate(img,img,dial_elem);
}


cv::Mat ImageProcessor::cannyEdgeDetection(cv::Mat& img)
{
    //Gaussian smoothing
    cv::Mat smooth_img;
    int kernel_size = 11;
    cv::GaussianBlur(img, smooth_img, cv::Size(kernel_size,kernel_size),0);

    //Canny edge detection
    cv::Mat edge_img;
    int min_thresh = 60;
    int max_thresh = 150;
    cv::Canny(img, edge_img, min_thresh, max_thresh);

    return edge_img;

}


cv::Mat ImageProcessor::houghTransform(cv::Mat& img, const cv::Mat& raw_img)
{   
    cv::Mat hough_img = raw_img.clone();

    float pi = 3.14159265358979323846;
    float theta = pi/180;

    std::vector<cv::Vec4i> lines;
    cv::HoughLinesP(img, lines, rho_, theta, threshold_, min_line_length_, max_line_gap_);

    for(size_t i=0; i<lines.size(); i++)
    {
        cv::line(hough_img, cv::Point(lines[i][0], lines[i][1]), cv::Point(lines[i][2], lines[i][3]), cv::Scalar(0,0,255), 3, 8);
    }

    return hough_img;
}


cv::Point ImageProcessor::waypointGen(cv::Mat& img)
{   
    //Create clone of imgs
    cv::Mat img_clone = img.clone();

    //Determine contours
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(img_clone, contours, cv::RETR_LIST, cv::CHAIN_APPROX_NONE);
    // cv::Mat contour_img(img_clone.size(), CV_8UC1, cv::Scalar(0));
    cv::Mat contour_img = img_clone.clone() * 255;

    //Find max contour
    double max_area = 0;
    int max_element;
    if (contours.size()>0)
    {
        for (long unsigned i=0; i<contours.size(); i++)
        {
            double new_area = cv::contourArea(contours[i]);
            if (new_area > max_area)
            {
                max_area = new_area;
                max_element = i;
            }
        }
        // cv::drawContours(contour_img, contours, max_element, cv::Scalar(255), CV_FILLED);
    }

    //Region of interest
    int roi_x, roi_y;
    roi_x = (img_clone.size().width/2) - (roi_width_/2);
    roi_y = look_dist_ - (roi_height_/2);
    if (roi_x < 0)
    {
        roi_x = 0;
    }
    if (roi_y < 0)
    {
        roi_y = 0;
    }
    if (roi_x > img_clone.size().width)
    {
        roi_x = img_clone.size().width;
    }
    if (roi_y > img_clone.size().height)
    {
        roi_y = img_clone.size().height;
    }
    //Define ROI in contour image
    cv::Rect regionRect(roi_x, roi_y, roi_width_, roi_height_);
    cv::Mat ROI(contour_img, regionRect);

    //Generate waypoint
    cv::Moments m = moments(ROI, true);
    int center_x = m.m10/m.m00;
    cv::Point waypoint = cv::Point(center_x, look_dist_);

    //Disregard invalid waypoints and set to previous valid waypoint
    if (waypoint.x < 0 || waypoint.y < 0)
    {
        waypoint.x = waypoint_old_.x;
        waypoint.y = waypoint_old_.y;
    }
    if (waypoint.x > img_clone.size().width || waypoint.y > img_clone.size().height)
    {
        waypoint.x = waypoint_old_.x;
        waypoint.y = waypoint_old_.y;
    }
    // if (abs(waypoint_old_.x - waypoint.x) > delta_wp_tolerance_ || abs(waypoint_old_.y - waypoint.y) > delta_wp_tolerance_)
    // {
    //     waypoint.x = waypoint_old_.x;
    //     waypoint.y = waypoint_old_.y;
    // }

    //Store old waypoint
    waypoint_old_ = waypoint;

    return waypoint;
}


int ImageProcessor::latErrorGen(const cv::Mat& img, const cv::Point waypoint)
{
    //Generate origin
    cv::Point origin = cv::Point(img.size().width/2, img.size().height);

    //Generate lateral error
    int lat_err = waypoint.x - origin.x;

    return lat_err;
}


float ImageProcessor::yawErrorGen(int lat_err)
{
    //Yaw error
    float yaw_err = std::atan2(lat_err, look_dist_);
    yaw_err = yaw_err*(180/3.14159265359);
    
    return yaw_err;
}