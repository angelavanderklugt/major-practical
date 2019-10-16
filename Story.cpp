#include "Story.h"
#include <iostream>
using namespace std;

int terr;
std::string choice;
int score=0;
int Story::currentScore=1;
Story::Story(){
}

void Story::getIntro(int terrain){
		terr=terrain;
	switch(terr){
		case 1:
		cout<<"You are thirsty and you see a lake, do you want to drink from it?"<<endl;
		cout<<"Y/N"<<endl;
		cin>>choice;
			if (choice=="Y"){
				cout<<"The water was contaminated. You died!"<<endl;
				score--;
				}if (choice=="N"){
					cout<<"Good choice, the water looked contaminated."<<endl;
					score++;
					}
break;

case 2:
	cout<<"You are thirsty and you see a lake, do you want to drink from it?"<<endl;
		cout<<"Y/N"<<endl;
		cin>>choice;
			if (choice=="Y"){
				cout<<"Good choice, you feel much better now!"<<endl;
				score++;
				}if (choice=="N"){
					cout<<"Uh oh! You were too slow and you got eaten!"<<endl;
					score--;
					}
break;
case 3:
	cout<<"You are thirsty and you see a lake, do you want to drink from it?"<<endl;
		cout<<"Y/N"<<endl;
		cin>>choice;
			if (choice=="Y"){
				cout<<"Oh no! You slipped down the lake and drowned."<<endl;
				score--;
				}if (choice=="N"){
					cout<<"Good choice, the water looked very deep there."<<endl;
					score++;
					}
					break;
		}
}

int Story::getScore(){
	return score++;
}

void Story::getOutro(int terrain){

}