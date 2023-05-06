cmake_minimum_required(VERSION 3.25)
project(BoundArray)

set(CMAKE_CXX_STANDARD 17)

add_executable(BoundArray BoundArrayMain.cpp PointTemplate.h ArrayTemplate.h)
