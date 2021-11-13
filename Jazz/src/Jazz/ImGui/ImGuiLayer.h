#pragma once

#include <Jazz/Events/ApplicationEvent.h>
#include <Jazz/Events/MouseEvent.h>
#include <Jazz/Events/KeyEvent.h>
#include <Jazz/Layer.h>

namespace Jazz {

    class JAZZ_API ImGuiLayer : public Layer {
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        virtual void OnAttach() override;
        virtual void OnDetach() override;
        virtual void OnImGuiRender() override;

        void Begin();
        void End();
    private:
        float m_Time = 0.0f;
        ImGuiContext *m_imGuiContext;
    };


}