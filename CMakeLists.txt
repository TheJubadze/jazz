cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(jazz-project)

add_subdirectory(jazz/vendor/glad)
add_subdirectory(jazz/vendor/GLFW)
add_subdirectory(jazz/src)
add_subdirectory(sandbox/src)
