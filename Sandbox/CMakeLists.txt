project(SandboxGame)

add_executable(${PROJECT_NAME}
        src/SandboxGame.cpp
        src/Sandbox2D.cpp)

add_custom_command(TARGET ${PROJECT_NAME}
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/assets $<TARGET_FILE_DIR:${PROJECT_NAME}>/assets)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../Jazz/src
        )

target_link_libraries(${PROJECT_NAME} PUBLIC JazzEngine)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
