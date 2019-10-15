#include <iostream>
#include <string>
using namespace std;
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
public:   

	Animal(string ASpecies) ;       
	int get_ID();
	string get_species();      
	static int animalID;
	string species;
	~Animal();
   
};
#endif //ANIMAL_H