cmake_minimum_required(VERSION 2.8)
project(nevodserver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_subdirectory(src)
add_subdirectory(tests)
enable_testing()
add_test(NAME nevodservertest COMMAND Test)
