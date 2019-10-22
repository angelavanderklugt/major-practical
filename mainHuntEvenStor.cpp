#include "Story.h"
#include "Event.h"
#include "Hunter.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Hunter *ItemFound;
	ItemFound = new Hunter();
	ItemFound -> AddItem("Rifle");
	ItemFound -> AddItem("Gun");

	string * Inventory;
	Inventory = ItemFound -> getItems();

	cout << endl;
	for (int i = 0; i < (ItemFound -> getItemCount()); i++) {
		cout << Inventory[i] << " ";
	}
	cout << endl;
	cout << endl;

	Event3 three3;
		three3.Events();
		int score = three3.getScore();
		if (score > 0) {
			cout << "Your score is: " << score << endl;
		} else {
			cout << "Game over" << endl;
			exit(0);
		}
}