cmake_minimum_required(VERSION 3.10...3.21 FATAL_ERROR)

project(Jazz)

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Build)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Build)

add_subdirectory(Jazz)
add_subdirectory(Jed)
add_subdirectory(Sandbox)
