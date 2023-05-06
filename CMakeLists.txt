cmake_minimum_required(VERSION 3.25)
project(Point)
project(BoundArray)

set(CMAKE_CXX_STANDARD 17)

add_executable(Point PointMain.cpp PointTemplate.cpp PointTemplate.h)
add_executable(BoundArray BoundArrayMain.cpp Point.cpp Point.h ArrayTemplate.h)
