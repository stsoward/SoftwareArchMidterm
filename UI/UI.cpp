#include "pch.h"
#include <utility>
#include <limits.h>
#include "UI.h"
#include <iostream>
#include "../Core/Core.h"
#include "../Application/Application.h"
using namespace std;

void Show_Minimap() {
	//do something
	Build_Map();
	cout << "Show Minimap" << endl;
}

void Show_HP() {
	//do something
	cout << "Show HP" << endl;
}

void Show_Hotbar() {
	//do something
	cout << "Show Hotbar" << endl;
}

void Show_Inventory() {
	//load player inventory and face character model to camera
	Load_Inventory();
	Turn_Character(0);
}