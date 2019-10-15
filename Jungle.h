#ifndef JUNGLE_H
#define JUNGLE_H
#include <string>
#include <iostream>
#include "Hunter.h"
using namespace std;

class Jungle: public Hunter{

public:
	Jungle();
	Jungle(std::string JungAnim);
	std::string jAnim;
	int get_rarity();
	string get_animal(int rarity);
	static int JcurrentID;
	int get_ID();
	int randNum;
	int id;
	~Jungle();
};

#endif