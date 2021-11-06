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

#define BIT(x) (1 << x)