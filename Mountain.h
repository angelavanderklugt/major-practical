#ifndef MOUNTAIN_H
#define MOUNTAIN_H
#include <string>
#include <iostream>
#include "Terrain.h"
using namespace std;

class Mountain: public Terrain{

private:
	int mount_id;

protected:
	Terrain* mterrain;

public:
	Mountain();
	Mountain(string Location);
	string mAnim;
	string get_animal(int rarity);
	int randNum;
	~Mountain();
};

#endif