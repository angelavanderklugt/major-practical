#include "Terrain.h"
#include "Jungle.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int rare1 = 1;
	string choice = "Jungle";
	Jungle* two = new Jungle(choice);
	cout << "You are looking for a: " << two -> get_animal(rare1) << endl;
	delete two;
}