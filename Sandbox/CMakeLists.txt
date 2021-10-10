project(SandboxGame)

add_executable(${PROJECT_NAME} src/SandboxGame.cpp)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../Jazz/src
        )

target_link_libraries(${PROJECT_NAME} PUBLIC JazzEngine)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

if (MSVC)
    add_compile_definitions(JZ_BUILD_DLL)
else ()
endif ()