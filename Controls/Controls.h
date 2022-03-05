#pragma once


#ifdef CONTROLS_EXPORTS
#define CONTROLS_API __declspec(dllexport)
#else
#define CONTROLS_API __declspec(dllimport)
#endif

extern "C" CONTROLS_API void Jump_Input();

extern "C" CONTROLS_API void Move_Input_X();

extern "C" CONTROLS_API void Move_Input_Z();

extern "C" CONTROLS_API void Attack_Input();