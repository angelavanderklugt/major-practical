#include "Mountain.h"
#include "Terrain.h"
#include <string>
#include <iostream>
using namespace std;
char ManimArr[3][10]={"Fox","Eagle","Bear"};
int mount_id = 0;
string mount_location;

Mountain::Mountain(string Location):Terrain(Location){
mount_id++;
mount_location = Location;
mterrain = new Terrain(mount_location);
}

string Mountain::get_animal(int rarity){
switch (rarity){
case 1: return ManimArr[0];
break;
case 2: return ManimArr[0];
break;
case 3: return ManimArr[0];
break;
case 4: return ManimArr[1];
break;
case 5: return ManimArr[1];
break;
case 6: return ManimArr[2];
}
}

Mountain::~Mountain(){
}