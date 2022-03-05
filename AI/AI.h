#pragma once


#ifdef AI_EXPORTS
#define AI_API __declspec(dllexport)
#else
#define AI_API __declspec(dllimport)
#endif


extern "C" AI_API void AI_Spawn(double x, double y, double z);

extern "C" AI_API bool AI_Attack(bool inRange, bool pc_Visible);

extern "C" AI_API double AI_Move_X(bool canMove, double target_Loc);

extern "C" AI_API double AI_Move_Z(bool canMove, double target_Loc);