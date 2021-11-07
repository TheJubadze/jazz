project(Glad)

add_library(${PROJECT_NAME} src/glad.c)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        )

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
