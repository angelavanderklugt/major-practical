#include "Terrain.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	string choice, yes;

	cout << "Choose a desired location you wish to explore" << endl;
	cout << "Possible locations include: 'Mountain', 'Savanna' or 'Jungle', choice: ";
	cin >> choice;

	Terrain* terra = new Terrain(choice);

	int rare1 = terra -> get_rarity();
	if (rare1 <= 3) {
		yes = "Common";
	} else if (rare1 == 6) {
		yes = "Exotic";
	} else {
		yes = "Rare";
	}

	cout << endl;
	cout << "The location you chose was: " << terra -> get_place() << endl;
	cout << "The rarity you have discovered is: " << yes << endl;
	cout << "You have "<< terra -> get_events() << " events to go through!" << endl;
	
}