#ifndef MOUNTAIN_H
#define MOUNTAIN_H
#include <string>
#include <iostream>
#include "Hunter.h"
using namespace std;

class Mountain: public Hunter{

public:
	Mountain();
	Mountain(std::string MountAnim);
	std::string mAnim;
	int get_rarity();
	string get_animal(int rarity);
	static int McurrentID;
	int get_ID();
	int randNum;
	int id;
	~Mountain();
};

#endif