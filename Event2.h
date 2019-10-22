#ifndef EVENT_H
#define EVENT_H
#include "Story.h"
using namespace std;
#include <iostream>
#include <string>

string choice2;
string choice3;
string choice4;
class Event : public Story{

public:
	void Events(string Animal){
		cout<<"You see some trees and a small lake. Which way do you want to go?"<<endl;
		cout<<"Trees or Lake?"<<endl;
		cin>>choice2;
			if (choice2=="Trees"){
				cout<<"You have found slingshot!"<<endl;
				score=2;

	if (Animal=="Fox"){
	cout<<"Do you want to climb a tree to get a better veiw?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice3;
	if (choice3=="Y"){
		cout<<"You grabbed a broken branch and fell!"<<endl;
		score=-1;
	}if(choice3=="N")
	cout<<"You heard a noise behind a bush. It's a fox! Do you want to use your slingshot?"<<endl;
	cin>>choice4;
	if (choice4=="Y"){
		cout<<"You got it!"<<endl;
		score=10;
	}if (choice4=="N"){
		cout<<"Oh no, you missed your chance!"<<endl;
		score=-1;
	}

}if (Animal=="Eagle"){
		cout<<"Do you want to climb a tree to get a better veiw?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice3;
	if (choice3=="Y"){
		cout<<"You grabbed a broken branch and fell!"<<endl;
		score=-1;
	}if(choice3=="N")
	cout<<"You heard a noise behind a bush. It's an Eagle! Do you want to use your slingshot?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice4;
	if (choice4=="Y"){
		cout<<"You got it!"<<endl;
		score=10;
	}if (choice4=="N"){
		cout<<"Oh no, you missed your chance!"<<endl;
		score=-1;
	}

}if (Animal=="Bear"){
		cout<<"Do you want to climb a tree to get a better veiw?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice3;
	if (choice3=="Y"){
		cout<<"You grabbed a broken branch and fell!"<<endl;
		score=-1;
	}if(choice3=="N")
	cout<<"You heard a noise behind a bush. It's a Bear! Do you want to use your slingshot?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice4;
	if (choice4=="Y"){
		cout<<"You got it!"<<endl;
		score=10;
	}if (choice4=="N"){
		cout<<"Oh no, you missed your chance!"<<endl;
		score=-1;
	}

}

				}if (choice2=="Lake"){
					cout<<"You have found a large rock and a fish!"<<endl;
					score=1;
						if (Animal=="Fox"){
	cout<<"Do you want to use the fish as bait?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice3;
	if (choice3=="N"){
		cout<<"The smell attracted a crocodile, it attacked you!"<<endl;
		score=-1;
	}if(choice3=="Y")
	cout<<"You heard a noise. It's a fox! Do you want to use your rock?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice4;
	if (choice4=="Y"){
		cout<<"You got it!"<<endl;
		score=10;
	}if (choice4=="N"){
		cout<<"Oh no, you missed your chance!"<<endl;
		score=-1;
	}

}if (Animal=="Eagle"){
		cout<<"Do you want to use the fish as bait?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice3;
	if (choice3=="N"){
		cout<<"The smell attracted a crocodile, it attacked you!"<<endl;
		score=-1;
	}if(choice3=="Y")
	cout<<"You heard a noise. It's an Eagle! Do you want to use your rock?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice4;
	if (choice4=="Y"){
		cout<<"You got it!"<<endl;
		score=10;
	}if (choice4=="N"){
		cout<<"Oh no, you missed your chance!"<<endl;
		score=-1;
	}

}if (Animal=="Bear"){
		cout<<"Do you want to use the fish as bait?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice3;
	if (choice3=="N"){
		cout<<"The smell attracted a crocodile, it attacked you!"<<endl;
		score=-1;
	}if(choice3=="N")
	cout<<"You heard a noise. It's a Bear! Do you want to use your rock?"<<endl;
	cout<<"Y/N"<<endl;
	cin>>choice4;
	if (choice4=="Y"){
		cout<<"You got it!"<<endl;
		score=10;
	}if (choice4=="N"){
		cout<<"Oh no, you missed your chance!"<<endl;
		score=-1;
	}

}
					}


	}



	int getScore(){
		return score;
	}
};



class Event2 : public Story{
public:
	void Events(string Animal){
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
	void Events(string Animal){
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
