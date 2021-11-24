cmake_minimum_required(VERSION 3.20)
project(testcpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(testcpp main.cpp admin.h car.cpp car.h admin.cpp user.h user.cpp)
