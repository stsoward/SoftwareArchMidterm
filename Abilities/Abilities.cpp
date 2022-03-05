#include "pch.h"
#include <utility>
#include <limits.h>
#include "Abilities.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;

void Enable_DoubleJump() {
	//do something
	cout << translate("jump","Allow Double Jump") << endl;
}

void Magic_Light() {
	//do something
	cout << "Turn on the light" << endl;
}

void Enable_DualWielding() {
	//do something
	cout << "Allow Dual Wielding" << endl;
}