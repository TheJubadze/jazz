#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Jazz/Log.h"

namespace Jazz {
    Application::Application() {}

    Application::~Application() {}

    void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			JZ_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			JZ_TRACE(e);
		}
        while (true);
    }
}