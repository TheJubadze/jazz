#pragma once

#include <imgui_internal.h>
#include "Jazz/Core.h"
#include "Jazz/Events/Event.h"

namespace Jazz {

    class JAZZ_API Layer {
    public:
        Layer(const std::string &name = "Layer");
        virtual ~Layer();

        virtual void OnAttach() {}
        virtual void OnDetach() {}
        virtual void OnUpdate() {}
        virtual void OnImGuiRender(ImGuiContext *context = nullptr) {}
        virtual void OnEvent(Event &event) {}

        inline const std::string &GetName() const { return m_DebugName; }
    protected:
        std::string m_DebugName;
    };

}