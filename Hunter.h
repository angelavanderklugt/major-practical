#ifndef HUNTER_H
#define HUNTER_H
#include <iostream>
#include <string>
using namespace std;

class Hunter {

protected:
	string Name;
	string Occup;
	int Count;


public:
	string * Items;
	int ItemNumber;
	Hunter();
	Hunter(string PlayName, string Job);
	void AddItem(string Item);
	string * getItems();
	int getItemCount();
	string getName();
	string getOccup();
	~Hunter();

};
#endif