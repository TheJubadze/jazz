#pragma once

int main(int, char **) {
    Jazz::Log::Init();
    Jazz::Log::GetCoreLogger()->warn("Initialized Log!");
    Jazz::Log::GetClientLogger()->info("Hello Jazz!");

    auto app = Jazz::CreateApplication();
    app->Run();
    delete app;
}