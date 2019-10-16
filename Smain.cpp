#include <iostream>
#include "Story.h"
#include <string>
using namespace std;

int main(){
	int terrain;
	cout<<"choose terrain"<<endl;
	cin>>terrain;
	Story* one=new Story();
	one->getIntro(terrain);
	delete one;
}