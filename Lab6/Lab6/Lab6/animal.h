#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string animalName;

public:
	Animal(string nm) : animalName(nm) {};

	void makeSound() {
		cout << animalName << " makes a sound. " << endl;
	}
};