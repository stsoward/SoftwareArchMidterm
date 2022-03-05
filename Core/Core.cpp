#include "pch.h"
#include <utility>
#include <limits.h>
#include "Core.h"
#include <iostream>
#include <boost/locale.hpp>

using namespace std;
using namespace boost::locale;

void Build_Map() {
	//do something
	cout << translate("map", "Build Map") << endl;
}

void Load_Inventory() {
	//do something
	cout << translate("Load the Inventory") << endl;
}

void Init_Engine() {
	//do something
	cout << translate("Start the Engine") << endl;
}