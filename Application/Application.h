#pragma once

#ifdef APPLICATION_EXPORTS
#define APPLICATION_API __declspec(dllexport)
#else
#define APPLICATION_API __declspec(dllimport)
#endif

extern "C" APPLICATION_API void Pickup_Item(int item_id);

extern "C" APPLICATION_API bool PC_Attack(int AI_ID, int damage);

extern "C" APPLICATION_API double PC_Move_X(bool canMove);

extern "C" APPLICATION_API double PC_Move_Z(bool canMove);

extern "C" APPLICATION_API void Turn_Character(int deg);