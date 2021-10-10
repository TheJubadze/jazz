#pragma once
#include <cstdio>

int main(int, char **) {
    printf("Hello Jazz");
    auto app = Jazz::CreateApplication();
    app->Run();
    delete app;
}