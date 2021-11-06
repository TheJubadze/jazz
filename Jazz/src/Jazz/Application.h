#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Jazz {
    class JAZZ_API Application {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application *CreateApplication();
}