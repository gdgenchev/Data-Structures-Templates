cmake_minimum_required(VERSION 3.8)
project(generic_dynamic_array_stack)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES array_stack.cpp test.cpp)
add_executable(generic_dynamic_array_stack ${SOURCE_FILES})