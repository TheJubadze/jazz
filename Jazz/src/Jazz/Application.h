#pragma once

#include "Core.h"

namespace Jazz {
    class JAZZ_API Application {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application* CreateApplication();
}