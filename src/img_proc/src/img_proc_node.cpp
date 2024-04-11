#include "img_proc_node.h"

void ImageProcessor::parseParameters()
{   
    //Mask parameters
    this->declare_parameter<int>("width_tolerance");
    this->get_parameter("width_tolerance", width_tolerance_);

    this->declare_parameter<float>("height_scale");
    this->get_parameter("height_scale", height_scale_);

    // // Erosion and Dilation parameters
    // this->declare_parameter<std::vector<double>>("erode_size");
    // this->get_parameter("erode_size",erode_size_);

    // this->declare_parameter<std::vector<double>>("dilate_size");
    // this->get_parameter("dilate_size",dilate_size_);

    //Hough transform parameters
    this->declare_parameter<int>("rho");
    this->get_parameter("rho", rho_);

    this->declare_parameter<int>("threshold");
    this->get_parameter("threshold", threshold_);

    this->declare_parameter<int>("min_line_length");
    this->get_parameter("min_line_length", min_line_length_);

    this->declare_parameter<int>("max_line_gap");
    this->get_parameter("max_line_gap", max_line_gap_);

}

void ImageProcessor::processImage(const sensor_msgs::msg::Image::SharedPtr msg)
{
    try
    {
        cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
        cv::Mat raw_img = cv_ptr->image;
        cv::Mat raw_copy1 = raw_img.clone();

        //Binary thresholding
        binaryThresholding(raw_copy1);
        //Masking
        cv::Mat mask;
        mask = maskImage(raw_copy1);
        //Erosion and dilation
        // erosionDilation(raw_copy1);

        //Edge detection
        // cv::Mat edge_img;
        // edge_img = cannyEdgeDetection(raw_copy1);

        //Hough Transform
        // cv::Mat hough_img;
        // hough_img = houghTransform(edge_img, raw_img);

        //Waypoint Gen
        cv::Mat process_img;
        process_img = waypointGen(raw_copy1);

        //Display
        cv::imshow("Raw", raw_img);
        cv::waitKey(1);

        cv::imshow("Binary Thresholding", raw_copy1);
        cv::waitKey(1);
        // // cv::imshow("Mask", mask);
        // // cv::waitKey(1);
        // cv::imshow("Edge Image", edge_img);
        // cv::waitKey(1);
        // cv::imshow("Hough Lines", hough_img);
        // cv::waitKey(1);
        cv::imshow("Contour Processing", process_img);
        cv::waitKey(1);

    }   
    catch(cv_bridge::Exception& e)
    {
		RCLCPP_ERROR(this->get_logger(),"CV Bridge Error: %s", e.what());
    }
    
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


cv::Mat ImageProcessor::waypointGen(cv::Mat& img)
{   
    //Create clone of imgs
    cv::Mat img_clone = img.clone();

    // //Region of interest
    // cv::Rect rect(rect_x_, rect_y_, rect_w_, rect_h_);

    // //Determine contours
    // std::vector<std::vector<cv::Point>> contours;
    // cv::findContours(img_clone, contours, cv::RETR_LIST, cv::CHAIN_APPROX_NONE)
    // cv::Mat contourImage(img_clone.size(), cv_8UC1, cv::Scalar(0));

    // //Determine contour w/ max area
    // double max_area = 0;
    // int max_element;
    // if (contours.size()>0)
    // {
    //     for (auto i=0; i<contours.size(); i++)
    //     {
    //         double new_area = cv::contourArea(contours[i]);
    //         if (new_area > max_area)
    //         {
    //             max_area = new_area;
    //             max_element = i;
    //         }
    //     }
    // }

    // //Drawing largest contour
    // cv::drawContours(contourImage, contours, max_element, cv::Scalar(255), CV_FILLED);

    // //Defining Region of Interest
    // cv::Mat ROI(contourImage, rect);24

    //Determine contours
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(img_clone, contours, cv::RETR_LIST, cv::CHAIN_APPROX_NONE);
    cv::Mat contour_img(img_clone.size(), CV_8UC1, cv::Scalar(0));

    double max_area = 0;
    int max_element;
    if (contours.size()>0)
    {
        for (int i=0; i<contours.size(); i++)
        {
            double new_area = cv::contourArea(contours[i]);
            if (new_area > max_area)
            {
                max_area = new_area;
                max_element = i;
            }
        }
    }

    cv::drawContours(contour_img, contours, max_element, cv::Scalar(255), CV_FILLED);
    // std::vector<cv::Point> cnt = contours[0];

    // cv::RotatedRect box = cv::minAreaRect(cnt);

    // cv::Point2f vertices[4];
    // box.points(vertices);

    // for (auto i=0;i<4;i++)
    // {
    //     cv::line(img_clone, vertices[i], vertices[(i+1)%4], cv::Scalar(0,255,0), 2);
    // }

    return contour_img;

}