cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(cppdaily)

set(CXX_STANDARD_REQUIRED N)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_subdirectory(1/easy)
add_subdirectory(1/hard)
