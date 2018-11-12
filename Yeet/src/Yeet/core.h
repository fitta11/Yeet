#pragma once

#ifdef YT_PLAT_WINDOWS
	#ifdef YT_BUILD_DLL
		#define YEET_API __declspec(dllexport)
	#else
		#define YEET_API __declspec(dllimport)
	#endif
#else
	#error Windows supported only
#endif