cmake_minimum_required(VERSION 3.26)
project(cprojects)

set(CMAKE_CXX_STANDARD 17)

add_executable(cprojects main.cpp
        main.h
        colors.h)
