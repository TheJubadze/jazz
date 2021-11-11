#pragma once

#include <Jazz/ImGui/ImGuiLayer.h>
#include "Core.h"
#include "Jazz/Events/ApplicationEvent.h"
#include "Events/Event.h"
#include "Window.h"
#include "LayerStack.h"

namespace Jazz {
    class JAZZ_API Application {
    public:
        Application();
        virtual ~Application();

        void Run();

        void OnEvent(Event &);

        void PushLayer(Layer *layer);
        void PushOverlay(Layer *layer);

        inline Window &GetWindow() { return *m_Window; }

        inline static Application &Get() { return *s_Instance; }
    private:
        bool OnWindowClose(WindowCloseEvent &e);

        std::unique_ptr<Window> m_Window;
        ImGuiLayer *m_ImGuiLayer;
        bool m_Running = true;
        LayerStack m_LayerStack;

        static Application *s_Instance;
    };

    // To be defined in CLIENT
    Application *CreateApplication();
}