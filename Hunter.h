#ifndef HUNTER_H
#define HUNTER_H
#include <iostream>
#include <string>
using namespace std;

class Hunter {

protected:
	string Name;
	string Occup;


public:
	Hunter();
	Hunter(string PlayName, string Job);
	string getName();
	string getOccup();
	~Hunter();

};
#endif