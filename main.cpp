#include <rclcpp/rclcpp.hpp>

int main(int argc, char * argv[]){
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("t_t_");
  RCLCPP_INFO(node->get_logger(),"tasaka_takayuki");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
