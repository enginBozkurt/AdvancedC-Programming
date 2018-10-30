// do not try to delete null pointers

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

	// copy constructor method
	Animal(const Animal &other): name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	// deconstructor method
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


int main() {

	Animal *pCat1 = new Animal();
	pCat1->setName("Freddy");
	pCat1->speak();
	// when you allocate memory with new you must remember to deallocate the memory explicitly
	delete pCat1;

	cout << sizeof(pCat1) << endl;

    return 0;
}