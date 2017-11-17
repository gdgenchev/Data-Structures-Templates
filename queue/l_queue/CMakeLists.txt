cmake_minimum_required(VERSION 3.8)
project(l_queue)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES l_queue.cpp l_queue_test/l_queue_test.cpp)
add_executable(l_queue ${SOURCE_FILES})