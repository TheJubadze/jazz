#include <Jazz.h>
#include <imgui.h>

class ExampleLayer : public Jazz::Layer {
public:
    ExampleLayer()
            : Layer("Example") {
    }

    void OnUpdate() override {
        if (Jazz::Input::IsKeyPressed(JZ_KEY_TAB))
            JZ_TRACE("Tab key is pressed (poll)!");
    }

    void OnEvent(Jazz::Event &event) override {
        if (event.GetEventType() == Jazz::EventType::KeyPressed)
        {
            Jazz::KeyPressedEvent& e = (Jazz::KeyPressedEvent&)event;
            if (e.GetKeyCode() == JZ_KEY_TAB)
                JZ_TRACE("Tab key is pressed (event)!");
            JZ_TRACE("{0}", (char)e.GetKeyCode());
        }
    }

//    void OnImGuiRender() override{
//        ImGui::Begin("Test");
//        ImGui::Text("Hello ImGui!");
//        ImGui::End();
//    }

};

class Sandbox : public Jazz::Application {
public:
    Sandbox() {
        PushLayer(new ExampleLayer());
    }

    ~Sandbox() {};
};

Jazz::Application *Jazz::CreateApplication() {
    return new Sandbox();
}