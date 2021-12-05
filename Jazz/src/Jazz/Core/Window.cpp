#include "Jazz/Core/Window.h"

#ifdef JZ_PLATFORM_WINDOWS
	#include "Platform/Windows/WindowsWindow.h"
#endif

namespace Jazz
{

	Scope<Window> Window::Create(const WindowProps& props)
	{
	#ifdef JZ_PLATFORM_WINDOWS
		return CreateScope<WindowsWindow>(props);
	#else
		JZ_CORE_ASSERT(false, "Unknown platform!");
		return nullptr;
	#endif
	}

}