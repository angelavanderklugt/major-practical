#include "Terrain.h"
#include <iostream>
#include <string>
using namespace std;

//Terrain::Terrain() {
//	place = "?";
//	Events = 0;
//}

Terrain::Terrain(string Location) {
	place = Location;
	if (place == "Mountain") {
		Events = 2;
	} else if (place == "Savanna") {
		Events = 2;
	} else if (place == "Jungle") {
		Events = 2;
	} else {
		Events = 0;
		cout << "This is not a valid location" << endl;
		exit(0);
	}
}

int Terrain::get_events() {
	return Events;
}

int Terrain::get_score() {
	return score;
}

string Terrain::get_place() {
	return place;
}

int Terrain::get_rarity(){
	srand(time(NULL));
	int randNum = (rand() % 6) + 1;
	return randNum;
}

//Terrain::~Terrain() {
//}