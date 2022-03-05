#pragma once


#ifdef DEVUTILS_EXPORTS
#define DEVUTILS_API __declspec(dllexport)
#else
#define DEVUTILS_API __declspec(dllimport)
#endif

extern "C" DEVUTILS_API void GodMode();

extern "C" DEVUTILS_API void NukeMap();

extern "C" DEVUTILS_API void NoClip();
