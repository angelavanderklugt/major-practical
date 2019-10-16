#include "Savanna.h"
#include "Terrain.h"
#include <string>
#include <iostream>
using namespace std;
char SanimArr[3][10]={"Hyena","Lion","Leopard"};
int sav_id = 0;
string sav_location;

Savanna::Savanna(string Location):Terrain(Location){
sav_location = Location;
sterrain = new Terrain(sav_location);
sav_id++;
}

string Savanna::get_animal(int rarity){
switch (rarity){
case 1: return SanimArr[0];
break;
case 2: return SanimArr[0];
break;
case 3: return SanimArr[0];
break;
case 4: return SanimArr[1];
break;
case 5: return SanimArr[1];
break;
case 6: return SanimArr[2];
}
}

Savanna::~Savanna(){
}