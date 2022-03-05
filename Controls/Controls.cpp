#include "pch.h"
#include <utility>
#include <limits.h>
#include "Controls.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;


void Jump_Input() {
	// do something
	cout << translate("jump","Jump") << endl;
}

void Move_Input_X() {
	// do something
	cout << "Move Forward/Backward" << endl;
}

void Move_Input_Z() {
	// do something
	cout << "Move Left/Right" << endl;
}

void Attack_Input() {
	// do something
	cout << "Attack" << endl;
}