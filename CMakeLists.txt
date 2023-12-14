cmake_minimum_required(VERSION 3.27)
project(CPP_Programs)

set(CMAKE_CXX_STANDARD 17)

add_executable(CPP_Programs main.cpp
        Array.cpp)
add_executable(Array Array.cpp
        Array.cpp)
