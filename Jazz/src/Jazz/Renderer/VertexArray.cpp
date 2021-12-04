#include "Jazz/Renderer/VertexArray.h"

#include "Jazz/Renderer/Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace Jazz {

    Ref<VertexArray> VertexArray::Create() {
        switch (Renderer::GetAPI()) {
            case RendererAPI::API::None: JZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
            case RendererAPI::API::OpenGL: return CreateRef<OpenGLVertexArray>();
        }

        JZ_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}// namespace Jazz