#include "pch.h"
#include <utility>
#include <limits.h>
#include "DevUtils.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;

void GodMode() {
	//do something
	cout << translate("context","God Mode Engage") << endl;
}

void NukeMap() {
	//do something
	cout << "Goodbye NPCs" << endl;
}

void NoClip() {
	//do something
	cout << "NoClip Engage" << endl;
}