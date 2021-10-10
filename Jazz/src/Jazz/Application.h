#pragma once

namespace Jazz {
    class Application {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application* CreateApplication();
}