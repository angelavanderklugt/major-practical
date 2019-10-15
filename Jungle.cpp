#include "Jungle.h"
#include "Hunter.h"
#include <string>
#include <iostream>
using namespace std;
char JanimArr[3][10]={"Monkey","Piranha","Cougar"};
int Jungle::JcurrentID=1;

Jungle::Jungle(string PlayName):Hunter(PlayName){
id=JcurrentID++;
}

int Jungle::get_rarity(){
srand(time(NULL));
int randNum = (rand() % 6) + 1;
return randNum;
}

string Jungle::get_animal(int rarity){
switch (rarity){
case 1: return JanimArr[0];
break;
case 2: return JanimArr[0];
break;
case 3: return JanimArr[0];
break;
case 4: return JanimArr[1];
break;
case 5: return JanimArr[1];
break;
case 6: return JanimArr[2];
}
}

int Jungle::get_ID(){
return id;
}

Jungle::~Jungle(){
}