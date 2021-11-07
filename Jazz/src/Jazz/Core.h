#pragma once

#ifdef JZ_PLATFORM_WINDOWS
#ifdef JZ_BUILD_DLL
    #define JAZZ_API __declspec(dllexport)
#else
    #define JAZZ_API __declspec(dllimport)
#endif
#else
    #define JAZZ_API
#endif

#ifdef JZ_ENABLE_ASSERTS
#define JZ_ASSERT(x, ...) { if(!(x)) { JZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #define JZ_CORE_ASSERT(x, ...) { if(!(x)) { JZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define JZ_ASSERT(x, ...)
#define JZ_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)