#include "pch.h"
#include <utility>
#include <limits.h>
#include "UI.h"
#include <iostream>
#include "../Core/Core.h"
#include "../Application/Application.h"
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;

void Show_Minimap() {
	//do something
	Build_Map();
	cout << translate("context","Show Minimap") << endl;
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