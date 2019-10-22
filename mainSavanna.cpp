#include "Terrain.h"
#include "Savanna.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int rare1 = 1;
	string choice = "Savanna";
	Savanna* three = new Savanna(choice);
	cout << "You are looking for a: " << three -> get_animal(rare1) << endl;
	delete three;
}