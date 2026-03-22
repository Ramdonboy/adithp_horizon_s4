                                                 
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class DistanceSubscriber : public rclcpp::Node {
public:
    DistanceSubscriber() : Node("distance_subscriber") {
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "distance_topic", 10,
            std::bind(&DistanceSubscriber::callback, this, std::placeholders::_1));
    }

private:
    void callback(const std_msgs::msg::String::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received: %s", msg->data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistanceSubscriber>());
    rclcpp::shutdown();
    return 0;
}

