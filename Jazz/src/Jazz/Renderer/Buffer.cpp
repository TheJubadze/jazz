#include "Jazz/Renderer/Buffer.h"
#include "Jazz/Renderer/Renderer.h"

#include "Platform/OpenGL/OpenGLBuffer.h"

namespace Jazz {

    Ref <VertexBuffer> VertexBuffer::Create(uint32_t size) {
        switch (Renderer::GetAPI()) {
            case RendererAPI::API::None:
                JZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
                return nullptr;
            case RendererAPI::API::OpenGL:
                return CreateRef<OpenGLVertexBuffer>(size);
        }

        JZ_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

    Ref <VertexBuffer> VertexBuffer::Create(float *vertices, uint32_t size) {
        switch (Renderer::GetAPI()) {
            case RendererAPI::API::None:
                JZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
                return nullptr;
            case RendererAPI::API::OpenGL:
                return CreateRef<OpenGLVertexBuffer>(vertices, size);
        }

        JZ_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

    Ref <IndexBuffer> IndexBuffer::Create(uint32_t *indices, uint32_t size) {
        switch (Renderer::GetAPI()) {
            case RendererAPI::API::None:
                JZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!");
                return nullptr;
            case RendererAPI::API::OpenGL:
                return CreateRef<OpenGLIndexBuffer>(indices, size);
        }

        JZ_CORE_ASSERT(false, "Unknown RendererAPI!");
        return nullptr;
    }

}// namespace Jazz