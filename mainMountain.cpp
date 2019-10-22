#include "Terrain.h"
#include "Mountain.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int rare1 = 1;
	string choice = "Mountain";
	Mountain* one = new Mountain(choice);
	cout << "You are looking for a: " << one -> get_animal(rare1) << endl;
	delete one;
}