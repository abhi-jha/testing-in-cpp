cmake_minimum_required(VERSION 3.10)
project(unittest_cpp)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES
        *.cpp
        *.h
        *.hpp
        )

#Must include ctach.hpp to the executable
add_executable(unittest_cpp main.cpp catch.hpp ${SOURCE_FILES} ${CATCH_INCLUDE_DIR})