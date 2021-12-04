#pragma once

#include "Jazz/Core/Core.h"

#include <spdlog/fmt/ostr.h>
#include <spdlog/spdlog.h>

namespace Jazz {

    class Log {
    public:
        static void Init();

        inline static Ref<spdlog::logger> &GetCoreLogger() { return s_CoreLogger; }
        inline static Ref<spdlog::logger> &GetClientLogger() { return s_ClientLogger; }

    private:
        static Ref<spdlog::logger> s_CoreLogger;
        static Ref<spdlog::logger> s_ClientLogger;
    };

}// namespace Jazz

// Core log macros
#define JZ_CORE_TRACE(...) ::Jazz::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define JZ_CORE_INFO(...) ::Jazz::Log::GetCoreLogger()->info(__VA_ARGS__)
#define JZ_CORE_WARN(...) ::Jazz::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define JZ_CORE_ERROR(...) ::Jazz::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JZ_CORE_FATAL(...) ::Jazz::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define JZ_CORE_CRITICAL(...) ::Jazz::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define JZ_TRACE(...) ::Jazz::Log::GetClientLogger()->trace(__VA_ARGS__)
#define JZ_INFO(...) ::Jazz::Log::GetClientLogger()->info(__VA_ARGS__)
#define JZ_WARN(...) ::Jazz::Log::GetClientLogger()->warn(__VA_ARGS__)
#define JZ_ERROR(...) ::Jazz::Log::GetClientLogger()->error(__VA_ARGS__)
#define JZ_FATAL(...) ::Jazz::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define JZ_CRITICAL(...) ::Jazz::Log::GetClientLogger()->critical(__VA_ARGS__)
