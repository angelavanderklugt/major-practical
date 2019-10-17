#ifndef EVENT_H
#define EVENT_H
#include "Story.h"
using namespace std;
#include <iostream>

string choice2;
class Event : public Story{

public:
	void Events(){
		cout<<"You are thirsty and you see a lake, do you want to drink from it?"<<endl;
		cout<<"Y/N"<<endl;
		cin>>choice2;
			if (choice2=="Y"){
				cout<<"The water was contaminated. You died!"<<endl;
				score--;
				}if (choice2=="N"){
					cout<<"Good choice, the water looked contaminated."<<endl;
					score++;
					}
	}
	int getScore(){
		return score;
	}
};



class Event2 : public Story{
public:
	void Events(){
		cout<<"You are thirsty and you see a lake, do you want to drink from it?"<<endl;
		cout<<"Y/N"<<endl;
		cin>>choice2;
			if (choice2=="Y"){
				cout<<"Good choice, you feel much better now!"<<endl;
				score++;
				}if (choice2=="N"){
					cout<<"Uh oh! You were too slow and you got eaten!"<<endl;
					score--;
					}

	}
	int getScore(){
		return score;
	}

};

class Event3 : public Story{
public: 
	void Events(){
	cout<<"You are thirsty and you see a lake, do you want to drink from it?"<<endl;
		cout<<"Y/N"<<endl;
		cin>>choice2;
			if (choice2=="Y"){
				cout<<"Oh no! You slipped down the lake and drowned."<<endl;
				score--;
				}if (choice2=="N"){
					cout<<"Good choice, the water looked very deep there."<<endl;
					score++;
					}
		}
		int getScore(){
		return score;
	}
};

#endif //EVENT_H