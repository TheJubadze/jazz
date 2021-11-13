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

        JZ_CORE_INFO("OpenGL Info:");
        JZ_CORE_INFO("  Vendor: {0}", glGetString(GL_VENDOR));
        JZ_CORE_INFO("  Renderer: {0}", glGetString(GL_RENDERER));
        JZ_CORE_INFO("  Version: {0}", glGetString(GL_VERSION));
    }

    void OpenGLContext::SwapBuffers() {
        glfwSwapBuffers(m_WindowHandle);
    }

}