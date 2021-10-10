project(JazzEngine)

#add_subdirectory(vendor/glad)
add_subdirectory(vendor/GLFW)

add_library(${PROJECT_NAME} SHARED
        src/Jazz/EntryPoint.h
        src/Jazz/Core.cpp src/Jazz/Core.h
        src/Jazz/Application.cpp src/Jazz/Application.h
        src/Jazz/Log.cpp src/Jazz/Log.h)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/GLFW/include
        )

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

if (MSVC)
    add_compile_definitions(JZ_BUILD_DLL)
else ()
endif ()