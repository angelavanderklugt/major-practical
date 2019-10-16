#ifndef SAVANNA_H
#define SAVANNA_H
#include <string>
#include <iostream>
#include "Terrain.h"
using namespace std;

class Savanna: public Terrain{

private:
	int sav_id;

protected:
	Terrain* sterrain;

public:
	Savanna();
	Savanna(string Location);
	string sAnim;
	string get_animal(int rarity);
	int randNum;
	~Savanna();
};

#endif