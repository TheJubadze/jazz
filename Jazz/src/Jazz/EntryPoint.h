#pragma once

int main(int, char **) {
    Jazz::Log::Init();
    JZ_CORE_WARN("Initialized Log!");
    JZ_INFO("Hello Jazz! Var={0}", 100500);

    auto app = Jazz::CreateApplication();
    app->Run();
    delete app;
}