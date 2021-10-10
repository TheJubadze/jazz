cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

project(sandbox)

add_executable(${PROJECT_NAME} src/SandboxGame.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../Jazz/src
        )

target_link_libraries(${PROJECT_NAME} PUBLIC jazz_engine)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
