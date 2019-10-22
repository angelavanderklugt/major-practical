#include "Terrain.h"
#include "Hunter.h"
#include "Savanna.h"
#include "Mountain.h"
#include "Jungle.h"
#include "Story.h"
#include "Event.h"
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
	
	if (choice == "Mountain") 
	{
		Mountain* one = new Mountain(choice);
		string animal=one->get_animal(rare1);

		cout << "You are looking for a: " << one -> get_animal(rare1) << endl;

		Event one1;
		one1.Events(animal);
		int score = one1.getScore();
		if (score > 0) {
			cout << "Your score is: " << score << endl;
		} else {
			cout << "Game over" << endl;
			exit(0);
		}


		delete one;

	} else if (choice == "Jungle") 
	{
		Jungle* two = new Jungle(choice);
		string animal=two->get_animal(rare1);
		cout << "You are looking for a: " << two -> get_animal(rare1) << endl;
		

		Event2 two2;
		two2.Events(animal);
		int score = two2.getScore();
		if (score > 0) {
			cout << "Your score is: " << score << endl;
		} else {
			cout << "Game over" << endl;
			exit(0);
		}


		delete two;

	} else if (choice == "Savanna") 
	{
		Savanna* three = new Savanna(choice);
		string animal=three->get_animal(rare1);
		cout << "You are looking for a: " << three -> get_animal(rare1) << endl;
		

		Event3 three3;
		three3.Events(animal);
		int score = three3.getScore();
		if (score > 0) {
			cout << "Your score is: " << score << endl;
		} else {
			cout << "Game over" << endl;
			exit(0);
		}


		delete three;

	}

	delete terra;
	return 0;

}
