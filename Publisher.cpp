#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include <chrono>
#include <memory>
#include <string>
#include <random>

using namespace std::chrono_literals;

class DistancePublisher : public rclcpp::Node {
public:
    DistancePublisher() : Node("distance_publisher") {

        // Create publisher on topic "distance_topic"
        publisher_ = this->create_publisher<std_msgs::msg::String>("distance_topic", 10);

        // Timer (publishes every 1 second)
        timer_ = this->create_wall_timer(
            1s, std::bind(&DistancePublisher::publish_message, this)
        );

        // Random number generator setup
        std::random_device rd;
        gen_ = std::mt19937(rd());
        dist_ = std::uniform_int_distribution<>(0, 200);

        RCLCPP_INFO(this->get_logger(), "Distance Publisher Started");
    }

private:
    void publish_message() {
        auto msg = std_msgs::msg::String();

        // Generate random distance
        int distance = dist_(gen_);

        msg.data = "Distance: " + std::to_string(distance) + " cm";

        RCLCPP_INFO(this->get_logger(), "Publishing: %s", msg.data.c_str());

        publisher_->publish(msg);
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    // Random generator variables
    std::mt19937 gen_;
    std::uniform_int_distribution<> dist_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DistancePublisher>());
    rclcpp::shutdown();
    return 0;
}
