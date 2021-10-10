cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(jazz_engine)

#add_subdirectory(vendor/glad)
add_subdirectory(vendor/GLFW)

add_library(${PROJECT_NAME} SHARED
        src/Jazz/Core.cpp src/Jazz/Core.h
        src/Jazz/Application.cpp src/Jazz/Application.h
        src/Jazz.h src/Jazz/EntryPoint.h)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/spdlog/include
        ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/GLFW/include
        )

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
