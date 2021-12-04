#pragma once

#include <Jazz/Events/ApplicationEvent.h>
#include <Jazz/Events/MouseEvent.h>
#include <Jazz/Events/KeyEvent.h>
#include <Jazz/Core/Layer.h>

namespace Jazz {

    class ImGuiLayer : public Layer {
    public:
        ImGuiLayer();
        ~ImGuiLayer() = default;

        virtual void OnAttach() override;
        virtual void OnDetach() override;

        void Begin();
        void End();
    private:
        float m_Time = 0.0f;
        ImGuiContext *m_imGuiContext;
    };


}