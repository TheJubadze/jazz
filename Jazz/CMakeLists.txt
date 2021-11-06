project(JazzEngine)

#add_subdirectory(vendor/glad)
add_subdirectory(vendor/GLFW)

add_library(${PROJECT_NAME} SHARED
        src/Jazz/Core.h
        src/Jazz/EntryPoint.h
        src/Jazz/Application.cpp
        src/Jazz/Application.h
        src/Jazz/Events/Event.h
        src/Jazz/Events/ApplicationEvent.h
        src/Jazz/Events/KeyEvent.h
        src/Jazz/Events/MouseEvent.h
        src/Jazz/Log.cpp
        src/Jazz/Log.h)

target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/GLFW/include
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

if (WIN32)
    add_compile_definitions(JZ_PLATFORM_WINDOWS)
    add_compile_definitions(JZ_BUILD_DLL)
else ()
endif ()