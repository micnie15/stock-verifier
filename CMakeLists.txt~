cmake_minimum_required(VERSION 2.8.3)
project(stock_verifier)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg)

## Declare ROS messages and services
#add_message_files(FILES Num.msg)
add_service_files(FILES stock_verifier.srv)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(stock_verifier_server src/stock_verifier_server.cpp)
target_link_libraries(stock_verifier_server ${catkin_LIBRARIES})
add_dependencies(stock_verifier_server stock_verifier_generate_messages_cpp)

add_executable(stock_verifier_client src/stock_verifier_client.cpp)
target_link_libraries(stock_verifier_client ${catkin_LIBRARIES})
add_dependencies(stock_verifier_client stock_verifier_generate_messages_cpp)

