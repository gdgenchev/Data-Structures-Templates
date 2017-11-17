cmake_minimum_required(VERSION 3.8)
project(linked__stack)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES l_stack.cpp tests.cpp)
add_executable(linked__stack ${SOURCE_FILES})
