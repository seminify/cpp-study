cmake_minimum_required(VERSION 3.25)
project(RectangleFaultFind)
project(RectangleFaultFindConstAdded)

set(CMAKE_CXX_STANDARD 17)

add_executable(RectangleFaultFind Point.cpp Point.h Rectangle.cpp Rectangle.h RectangleFaultFind.cpp)
add_executable(RectangleFaultFindConstAdded Point.cpp Point.h Rectangle.cpp Rectangle.h RectangleConstructor.cpp)
