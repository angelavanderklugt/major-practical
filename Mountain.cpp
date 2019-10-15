#include "Mountain.h"
#include "Hunter.h"
#include <string>
#include <iostream>
using namespace std;
char ManimArr[3][10]={"gazelle","Eagle","Bear"};
int Mountain::McurrentID=1;

Mountain::Mountain(string PlayName):Hunter(PlayName){
id=McurrentID++;
}

int Mountain::get_rarity(){
srand(time(NULL));
int randNum = (rand() % 6) + 1;
return randNum;
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

int Mountain::get_ID(){
return id;
}

Mountain::~Mountain(){
}