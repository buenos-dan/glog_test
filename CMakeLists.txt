cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(glog_test)

find_package (glog 0.6.0 REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} glog::glog)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
