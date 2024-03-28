cmake_minimum_required(VERSION 3.26)
project(Labs)

set(CMAKE_CXX_STANDARD 17)

add_executable(Labs main.cpp
        print.h
        print.cpp
        geom.h
        geom.cpp)
