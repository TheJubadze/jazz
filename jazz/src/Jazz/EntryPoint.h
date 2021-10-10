#pragma once

int main(int, char **) {
    Jazz::Log::Init();
    auto app = Jazz::CreateApplication();
    app->Run();
    delete app;
}