#include <iostream>
#include <string>
#include "Hunter.h"
using namespace std;

Hunter::Hunter() {
	Name = "?";
	Occup = "Hunter";
}

Hunter::Hunter(string PlayName, string Job) {
	Name = PlayName;
	Occup = Job;
}

string Hunter::getName() {
	return Name;
}

string Hunter::getOccup() {
	return Occup;
}

Hunter::~Hunter() {
}
