#include "RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Jazz {

    RendererAPI *RenderCommand::s_RendererAPI = new OpenGLRendererAPI;

}