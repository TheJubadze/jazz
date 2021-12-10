#pragma once
#include "Jazz/Core/Base.h"

#ifdef JZ_PLATFORM_WINDOWS

extern Jazz::Application *Jazz::CreateApplication();

int main(int argc, char **argv) {
    Jazz::Log::Init();

    JZ_PROFILE_BEGIN_SESSION("Startup", "JazzProfile-Startup.json");
    auto app = Jazz::CreateApplication();
    JZ_PROFILE_END_SESSION();

    JZ_PROFILE_BEGIN_SESSION("Runtime", "JazzProfile-Runtime.json");
    app->Run();
    JZ_PROFILE_END_SESSION();

    JZ_PROFILE_BEGIN_SESSION("Startup", "JazzProfile-Shutdown.json");
    delete app;
    JZ_PROFILE_END_SESSION();
}

#endif
