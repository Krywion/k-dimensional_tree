cmake_minimum_required(VERSION 3.27)
project(dTree)

set(CMAKE_CXX_STANDARD 17)

add_executable(dTree src/main.cpp
        src/dTree.cpp
        src/dTree.h
)
