#pragma once


#ifdef ABILITIES_EXPORTS
#define ABILITIES_API __declspec(dllexport)
#else
#define ABILITIES_API __declspec(dllimport)
#endif

extern "C" ABILITIES_API void Enable_DoubleJump();

extern "C" ABILITIES_API void Magic_Light();

extern "C" ABILITIES_API void Enable_DualWielding();
