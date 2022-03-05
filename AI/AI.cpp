#include "pch.h"
#include <utility>
#include <limits.h>
#include "AI.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;

void AI_Spawn(double x, double y, double z) {
	// do something
	cout << translate("computer","Spawn AI") << endl;
}

bool AI_Attack(bool inRange, bool pc_Visible) {
	//do something
	cout << "AI Attacks" << endl;
	return true;
}

double AI_Move_X(bool canMove, double target_Loc) {
	//do something
	cout << "AI Moves North/South" << endl;
	return 0;
}

double AI_Move_Z(bool canMove, double target_Loc) {
	//do something
	cout << "AI Moves East/West" << endl;
	return 0;
}