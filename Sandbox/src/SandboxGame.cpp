#include <Jazz.h>

class Sandbox : public Jazz::Application {
public:
    Sandbox() {};

    ~Sandbox() {};
};

Jazz::Application* Jazz::CreateApplication(){
    return new Sandbox();
}