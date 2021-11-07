project(JazzEngine)

#add_subdirectory(vendor/glad)

add_subdirectory(vendor/GLFW)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "GLFW lib only")

add_library(${PROJECT_NAME} SHARED
        src/jzpch.h
        src/Jazz/Core.h
        src/Jazz/EntryPoint.h
        src/Jazz/Events/Event.h
        src/Jazz/Events/ApplicationEvent.h
        src/Jazz/Events/KeyEvent.h
        src/Jazz/Events/MouseEvent.h
        src/Jazz/Window.h

        src/Jazz/Application.cpp
        src/Jazz/Log.cpp
        src/Platform/Windows/WindowsWindow.cpp
        )

find_package(OpenGL REQUIRED)

target_link_libraries(${PROJECT_NAME}
        ${OPENGL_LIBRARIES}
        glfw)

target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/GLFW/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include)

target_precompile_headers(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src/jzpch.h)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

if (WIN32)
    add_compile_definitions(JZ_PLATFORM_WINDOWS)
    add_compile_definitions(JZ_BUILD_DLL)
else ()
endif ()