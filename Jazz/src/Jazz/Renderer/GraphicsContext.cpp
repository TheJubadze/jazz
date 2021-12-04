#include "Jazz/Renderer/GraphicsContext.h"

#include "Jazz/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLContext.h"

namespace Jazz {

    Scope<GraphicsContext> GraphicsContext::Create(void *window) {
        switch (Renderer::GetAPI()) {
            case RendererAPI::API::None:
                JZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
                return nullptr;
            case RendererAPI::API::OpenGL:
                return CreateScope<OpenGLContext>(static_cast<GLFWwindow *>(window));
        }

        JZ_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}// namespace Jazz