#include "OpenGLContext.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Jazz {

    OpenGLContext::OpenGLContext(GLFWwindow *windowHandle)
            : m_WindowHandle(windowHandle) {
        JZ_CORE_ASSERT(windowHandle, "Window handle is null!")
    }

    void OpenGLContext::Init() {
        glfwMakeContextCurrent(m_WindowHandle);
        int status = gladLoadGLLoader((GLADloadproc) glfwGetProcAddress);
        JZ_CORE_ASSERT(status, "Failed to initialize Glad!");
    }

    void OpenGLContext::SwapBuffers() {
        glfwSwapBuffers(m_WindowHandle);
    }

}