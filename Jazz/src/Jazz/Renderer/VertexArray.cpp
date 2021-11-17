#include "VertexArray.h"

#include "Renderer.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace Jazz {

	VertexArray* VertexArray::Create()
	{
		switch (Renderer::GetAPI())
		{
            case RendererAPI::API::None:    JZ_CORE_ASSERT(false, "RendererAPI::None is currently not supported!"); return nullptr;
			case RendererAPI::API::OpenGL:  return new OpenGLVertexArray();
		}

		JZ_CORE_ASSERT(false, "Unknown RendererAPI!");
		return nullptr;
	}

}