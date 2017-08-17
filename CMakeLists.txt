cmake_minimum_required(VERSION 3.8)
project(Point_Inheritance)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.cpp Person.h Tweeter.cpp Tweeter.h)
add_executable(Point_Inheritance ${SOURCE_FILES})