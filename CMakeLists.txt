cmake_minimum_required(VERSION 3.30)
project(circle_ellipse)

set(CMAKE_CXX_STANDARD 20)

add_executable(circle_ellipse main.cpp
        point.cpp
        point.h
        ellipse.cpp
        ellipse.h
        circle.cpp
        circle.h)
