cmake_minimum_required(VERSION 3.19)
project(ZooProject)

set(CMAKE_CXX_STANDARD 98)

add_executable(ZooProject main.cpp Eagle.hpp Tiger.hpp Chicken.hpp zoo.cpp zoo.h shop.cpp shop.h)