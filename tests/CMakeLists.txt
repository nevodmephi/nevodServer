cmake_minimum_required(VERSION 2.8)
project(nevodserver)

add_subdirectory(mocks)

set(catch_files
    ${CMAKE_SOURCE_DIR}/include
)

set(test_files
    hostclient.cpp
    rpcserver.cpp
    configparsers.cpp
    hostclient.cpp
)

add_library(catch INTERFACE)
target_include_directories(catch INTERFACE ${catch_files})

add_executable(Test ${test_files})
target_link_libraries(Test catch)
target_link_libraries(Test mocks)
