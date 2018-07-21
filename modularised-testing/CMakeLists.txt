cmake_minimum_required(VERSION 3.10)
project(modularised_testing)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES
        *.cpp
        *.h
        *.hpp
        )

add_executable(modularised_testing ${SOURCE_FILES})