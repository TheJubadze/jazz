#pragma once

#include <memory>

#ifdef JZ_PLATFORM_WINDOWS
    #if JZ_DYNAMIC_LINK
        #ifdef JZ_BUILD_DLL
            #define JAZZ_API __declspec(dllexport)
        #else
            #define JAZZ_API __declspec(dllimport)
        #endif
    #else
        #define JAZZ_API
    #endif
#else
    #define JAZZ_API
#endif

#ifdef JZ_DEBUG
    #define JZ_ENABLE_ASSERTS
#endif

#ifdef JZ_ENABLE_ASSERTS
    #define JZ_ASSERT(x, ...) { if(!(x)) { JZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
    #define JZ_CORE_ASSERT(x, ...) { if(!(x)) { JZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define JZ_ASSERT(x, ...)
#define JZ_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)

#define JZ_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)

namespace Jazz {

    template<typename T>
    using Scope = std::unique_ptr<T>;

    template<typename T>
    using Ref = std::shared_ptr<T>;

}