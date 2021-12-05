#pragma once

#include "Jazz/Core/Core.h"

#include "Jazz/Core/LayerStack.h"
#include "Jazz/Core/Window.h"
#include "Jazz/Events/ApplicationEvent.h"
#include "Jazz/Events/Event.h"

#include "Jazz/Core/Timestep.h"

#include "Jazz/ImGui/ImGuiLayer.h"

int main(int argc, char **argv);

namespace Jazz {
    class Application {
    public:
        Application();
        virtual ~Application();

        void OnEvent(Event &);

        void PushLayer(Layer *layer);
        void PushOverlay(Layer *layer);

        inline Window &GetWindow() { return *m_Window; }

        inline static Application &Get() { return *s_Instance; }

    private:
        void Run();
        bool OnWindowClose(WindowCloseEvent &e);
        bool OnWindowResize(WindowResizeEvent &e);

        std::unique_ptr<Window> m_Window;
        ImGuiLayer *m_ImGuiLayer;
        bool m_Running = true;
        bool m_Minimized = false;
        LayerStack m_LayerStack;

    private:
        static Application *s_Instance;
        float m_LastFrameTime = 0.0f;

        friend int ::main(int argc, char **argv);
    };

    // To be defined in CLIENT
    Application *CreateApplication();
}// namespace Jazz