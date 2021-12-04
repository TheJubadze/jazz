#pragma once

#include <imgui_internal.h>
#include <src/Jazz/Core/Core.h>
#include <Jazz/Events/Event.h>
#include <Jazz/Core/Timestep.h>

namespace Jazz {

    class Layer {
    public:
        Layer(std::string name = "Layer");
        virtual ~Layer() = default;

        virtual void OnAttach() {}
        virtual void OnDetach() {}
        virtual void OnUpdate(Timestep ts) {}
        virtual void OnImGuiRender() {}
        virtual void OnEvent(Event &) {}

        inline const std::string &GetName() const { return m_DebugName; }
    protected:
        std::string m_DebugName;
    };

}