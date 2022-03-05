#pragma once


#ifdef CORE_EXPORTS
#define CORE_API __declspec(dllexport)
#else
#define CORE_API __declspec(dllimport)
#endif

extern "C" CORE_API void Build_Map();

extern "C" CORE_API void Load_Inventory();

extern "C" CORE_API void Init_Engine();