cmake_minimum_required(VERSION 3.8)
project(array_queue)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES array_queue.cpp array_queue_test/array_queue_test.cpp)
add_executable(array_queue ${SOURCE_FILES})