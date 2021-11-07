#include <Jazz.h>

class ExampleLayer : public Jazz::Layer {
public:
    ExampleLayer()
            : Layer("Example") {
    }

    void OnUpdate() override {
        JZ_INFO("ExampleLayer::Update");
    }

    void OnEvent(Jazz::Event &event) override {
        JZ_TRACE("{0}", event);
    }

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