#include "pch.h"
#include <utility>
#include <limits.h>
#include "Application.h"
#include <iostream>
#include "../Core/Core.h"
using namespace std;

void Pickup_Item(int item_id) {
	// do something
	cout << "Pickup Item" << endl;
	Load_Inventory();
}

bool PC_Attack(int AI_ID, int damage) {
	//do something
	cout << "PC Attacks" << endl;
	return true;
}

double PC_Move_X(bool canMove) {
	//do something
	cout << "PC Moves North/South" << endl;
	return 0;
}

double PC_Move_Z(bool canMove) {
	//do something
	cout << "PC Moves East/West" << endl;
	return 0;
}

void Turn_Character(int deg) {
	//turn character based on given degrees
	cout << "Character turns" << endl;
}