cmake_minimum_required(VERSION 3.10)
project(asserting)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES
        *.cpp
        *.h
        *.hpp
        )

add_executable(asserting ${SOURCE_FILES})