//// functions and local variables ares stored in stack memory
// when you use new (creating objects), you actually allocate the memory in heap. 

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}
	//copy constructor
	Animal(const Animal& other) :
		name(other.name) {
		cout << "Animal created by copying." << endl;
	}
	// deconstructor
	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

// Using pointers while returning an object from a function is an efficient way.
// Because when you call the function, only a copy of a pointer is passed to 
// the calling function as an argument.

Animal *createAnimal() {
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bernie");
	
	return pAnimal;
}

int main() {

	Animal *pFrog = createAnimal();

	pFrog->speak();

	delete pFrog;

    return 0;
}