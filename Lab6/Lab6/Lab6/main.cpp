
#include "dog.h"

int main() {
    Animal genericAnimal("Generic Animal");
    genericAnimal.makeSound();

    Dog myDog("Buddy", "Golden Retriever");
    myDog.makeSound(); // Inherited from Animal
    myDog.bark();      // Uses both the name and breed data members

    return 0;
};