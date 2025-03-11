#ifndef CONTROL_PUBLISHER_HPP
#define CONTROL_PUBLISHER_HPP

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "plc_msgs/msg/camera_control_custom.hpp"
#include "plc_msgs/msg/lamp_control_custom.hpp"
#include "plc_msgs/msg/pan_and_tilt_control_custom.hpp"

class ControlPublisher : public rclcpp::Node
{
public:
  ControlPublisher();

private:
  void publish_camera_data();
  void publish_lamp_data();
  void publish_panandtilt_data();

  rclcpp::TimerBase::SharedPtr timer_camera_;
  rclcpp::TimerBase::SharedPtr timer_lamp_;
  rclcpp::TimerBase::SharedPtr timer_panandtilt_;
  rclcpp::Publisher<plc_msgs::msg::CameraControlCustom>::SharedPtr camera_publisher_;
  rclcpp::Publisher<plc_msgs::msg::LampControlCustom>::SharedPtr lamp_publisher_;
  rclcpp::Publisher<plc_msgs::msg::PanAndTiltControlCustom>::SharedPtr panandtilt_publisher_;
};

#endif // CONTROL_PUBLISHER_HPP
