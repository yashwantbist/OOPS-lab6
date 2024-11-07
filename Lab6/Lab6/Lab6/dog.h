#pragma once

#include "animal.h"

class Dog:public Animal {
	string breed;

public:
	//modifying  to accept 2 paras
	Dog(string dogName,string dogBreed ): Animal(dogName){
		breed = dogBreed;
	};

	//member function
	void bark() {
		
		cout << animalName << ", the " << breed << " barks: Woof! Woof! ." << endl;
	}
};