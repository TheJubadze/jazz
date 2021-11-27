#pragma once

#include <Core.h>

#include <Window.h>
#include <LayerStack.h>
#include <Events/Event.h>
#include <Jazz/Events/ApplicationEvent.h>
#include <Jazz/ImGui/ImGuiLayer.h>

namespace Jazz {
    class JAZZ_API Application {
    public:
        Application();
        virtual ~Application() = default;

        void Run();

        void OnEvent(Event &);

        void PushLayer(Layer *layer);
        void PushOverlay(Layer *layer);

        inline Window &GetWindow() { return *m_Window; }

        inline static Application &Get() { return *s_Instance; }
    private:
        bool OnWindowClose(WindowCloseEvent &e);
        bool OnWindowResize(WindowResizeEvent& e);

        std::unique_ptr<Window> m_Window;
        ImGuiLayer *m_ImGuiLayer;
        bool m_Running = true;
        bool m_Minimized = false;
        LayerStack m_LayerStack;

    private:
        static Application *s_Instance;
        float m_LastFrameTime = 0.0f;
    };

    // To be defined in CLIENT
    Application *CreateApplication();
}