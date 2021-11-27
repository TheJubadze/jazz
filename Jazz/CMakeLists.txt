project(JazzEngine)

add_subdirectory(vendor/imgui)
add_subdirectory(vendor/Glad)
add_subdirectory(vendor/glm)

add_subdirectory(vendor/GLFW)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "GLFW lib only")

set(Sources
        src/Jazz/Application.cpp
        src/Jazz/Log.cpp
        src/Jazz/Layer.cpp
        src/Jazz/LayerStack.cpp

        src/Jazz/ImGui/ImGuiBuild.cpp
        src/Jazz/ImGui/ImGuiLayer.cpp

        src/Jazz/Renderer/Shader.cpp
        src/Jazz/Renderer/Buffer.cpp
        src/Jazz/Renderer/Renderer.cpp
        src/Jazz/Renderer/VertexArray.cpp
        src/Jazz/Renderer/RenderCommand.cpp
        src/Jazz/Renderer/RendererAPI.cpp
        src/Jazz/Renderer/OrthographicCamera.cpp
        src/Jazz/Renderer/Texture.cpp

        src/Platform/Windows/WindowsWindow.cpp
        src/Platform/Windows/WindowsInput.cpp

        src/Platform/OpenGL/OpenGLContext.cpp
        src/Platform/OpenGL/OpenGLBuffer.cpp
        src/Platform/OpenGL/OpenGLVertexArray.cpp
        src/Platform/OpenGL/OpenGLRendererAPI.cpp
        src/Platform/OpenGL/OpenGLShader.cpp
        src/Platform/OpenGL/OpenGLTexture.cpp

        vendor/stb_image/stb_image.cpp
        )

set(Headers)

add_library(${PROJECT_NAME} STATIC ${Sources} ${Headers})

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
        ${CMAKE_CURRENT_SOURCE_DIR}/src/Jazz
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/GLFW/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/Glad/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/glm/glm
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/imgui/imgui
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/stb_image
        )

target_precompile_headers(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/jzpch.h)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

if (WIN32)
    add_compile_options(/MD)
    add_compile_definitions(JZ_PLATFORM_WINDOWS)
    add_compile_definitions(JZ_BUILD_DLL)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
else ()
endif ()

if (MSVC)
    target_compile_options(${PROJECT_NAME} PUBLIC /W3)
else ()
    target_compile_options(${PROJECT_NAME} PUBLIC -Wall)
endif ()
