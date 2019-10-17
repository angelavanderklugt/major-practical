#include "Story.h"
#include "Event.h"
#include <iostream>
using namespace std;

int main(void){
	Event one;
	Event2 two;
	Event3 three;

	one.Events();
	//two.Events();
	//three.Events();
	int score=one.getScore();
	if (score>0){
	cout<<"Your score is now: "<<score<<endl;
}else{
	cout<<"Game over."<<endl;
}

}