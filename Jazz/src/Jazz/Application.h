#pragma once

#include <Jazz/Events/ApplicationEvent.h>
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Jazz {
    class JAZZ_API Application {
    public:
        Application();
        virtual ~Application();

        [[noreturn]] void Run();

        void OnEvent(Event &);

    private:
        bool OnWindowClose(WindowCloseEvent& e);

        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };

    // To be defined in CLIENT
    Application *CreateApplication();
}