#pragma once


#ifdef UI_EXPORTS
#define UI_API __declspec(dllexport)
#else
#define UI_API __declspec(dllimport)
#endif

extern "C" UI_API void Show_Minimap();

extern "C" UI_API void Show_HP();

extern "C" UI_API void Show_Hotbar();

extern "C" UI_API void Show_Inventory();