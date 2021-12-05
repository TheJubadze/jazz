#include "Jazz/Core/Input.h"

#ifdef JZ_PLATFORM_WINDOWS
    #include "Platform/Windows/WindowsInput.h"
#endif

namespace Jazz {

    Scope<Input> Input::s_Instance = Input::Create();

    Scope<Input> Input::Create() {
#ifdef JZ_PLATFORM_WINDOWS
        return CreateScope<WindowsInput>();
#else
        JZ_CORE_ASSERT(false, "Unknown platform!");
        return nullptr;
#endif
    }
}// namespace Jazz