#include <Jazz.h>
#include <Jazz/Core/EntryPoint.h>

#include "Sandbox2D.h"

class Sandbox : public Jazz::Application {
public:
    Sandbox() {
        // PushLayer(new ExampleLayer());
        PushLayer(new Sandbox2D());
    }

    ~Sandbox() {
    }
};

Jazz::Application *Jazz::CreateApplication() {
    return new Sandbox();
}