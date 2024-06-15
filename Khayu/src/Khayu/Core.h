#pragma once

#ifdef KH_PLATFORM_WINDOWS
	#ifdef KH_BUILD_DLL
		#define KHAYU_API __declspec(dllexport)
	#else
		#define KHAYU_API __declspec(dllimport)
	#endif
#else
	#error Khayu only supports Windows!
#endif