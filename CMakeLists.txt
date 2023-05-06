cmake_minimum_required(VERSION 3.25)
project(Car)
project(CarInline)

set(CMAKE_CXX_STANDARD 17)

add_executable(Car RacingMain.cpp Car.cpp Car.h)
add_executable(CarInline RacingInlineMain.cpp CarInline.cpp CarInline.h)
