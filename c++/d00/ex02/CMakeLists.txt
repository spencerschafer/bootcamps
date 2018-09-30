cmake_minimum_required(VERSION 3.10)
project(ex02)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(ex02
        Account.class.cpp
        Account.class.hpp
        tests.cpp
        )
