#include <string>
#include <iostream>
#include "Savanna.h"
#include "Mountain.h"
#include "Jungle.h"
#include "Hunter.h"
using namespace std;
int main(){
	int choice;
	string PName, yes;
	cout<<"Enter a number to choose terrain to search:"<<endl;
	cout<<"1 = Savanna, 2 = Mountain, 3 = Jungle, choice: ";
	cin>>choice;

	switch (choice){
		case 1:
		{
			cout<<endl;
			cout<<"What is your character's name: ";
			cin>>PName;
			cout<<endl;
			Savanna* one=new Savanna(PName);
			cout<<"The rarity of the animal you have found is: ";
			int rare1=one->get_rarity();
			if (rare1 <= 3) {
				yes = "Common";
			} else if (rare1 == 6) {
				yes = "Exotic";
			} else {
				yes = "Rare";
			}
			cout<<yes<<endl;
			cout<<"You have found a: "<<one->get_animal(rare1)<<endl;
			cout<<one->get_ID()<<endl;
			delete one;
			return 0;
			break;
		}

		case 2:
		{
			cout<<endl;
			cout<<"What is your character's name: ";
			cin>>PName;
			cout<<endl;
			Mountain* two=new Mountain(PName);
			cout<<"The rarity of the animal you have found is: ";
			int rare2=two->get_rarity();
			if (rare2 <= 3) {
				yes = "Common";
			} else if (rare2 == 6) {
				yes = "Exotic";
			} else {
				yes = "Rare";
			}
			cout<<yes<<endl;
			cout<<"You have found a: "<<two->get_animal(rare2)<<endl;
			cout<<two->get_ID()<<endl;
			delete two;
			return 0;
			break;
		}

		case 3:
		{
			cout<<endl;
			cout<<"What is your character's name: ";
			cin>>PName;
			cout<<endl;
			Jungle* three=new Jungle(PName);
			cout<<"The rarity of the animal you have found is: ";
			int rare3=three->get_rarity();
			if (rare3 <= 3) {
				yes = "Common";
			} else if (rare3 == 6) {
				yes = "Exotic";
			} else {
				yes = "Rare";
			}
			cout<<yes<<endl;
			cout<<"You have found a: "<<three->get_animal(rare3)<<endl;
			cout<<three->get_ID()<<endl;
			delete three;
			return 0;
			break;
		}
	}
}