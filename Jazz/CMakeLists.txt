project(JazzEngine)

add_subdirectory(vendor/imgui)
add_subdirectory(vendor/Glad)
add_subdirectory(vendor/glm)

add_subdirectory(vendor/GLFW)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "GLFW lib only")

add_library(${PROJECT_NAME} SHARED
        src/Jazz/Application.cpp
        src/Jazz/Log.cpp
        src/Jazz/Layer.cpp
        src/Jazz/LayerStack.cpp
        src/Jazz/ImGui/ImGuiLayer.cpp
        src/Platform/Windows/WindowsWindow.cpp
        src/Platform/Windows/WindowsInput.cpp
        src/Platform/OpenGL/ImGuiOpenGLRenderer.cpp
        )

find_package(OpenGL REQUIRED)

target_link_libraries(${PROJECT_NAME}
        ${OPENGL_LIBRARIES}
        glfw
        Glad
        ImGui
        glm)

target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/GLFW/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/Glad/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/glm/glm
        )

target_precompile_headers(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/jzpch.h)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

if (WIN32)
    add_compile_options(/MD)
    add_compile_definitions(JZ_PLATFORM_WINDOWS)
    add_compile_definitions(JZ_BUILD_DLL)
else ()
endif ()