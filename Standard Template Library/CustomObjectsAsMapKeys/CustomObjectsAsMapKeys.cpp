// Custom Objects As Map Keys

#include "stdafx.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;

class Person {
private:
	string name;
	int age;

public:

	//parameterless constructor

	Person() : name(""), age(0) {
	}


	// Copy constructor for creating a new object as a copy of an existing object
	// The first argument of such a constructor is a reference to an object 
	// of the same type as is being constructed (const or non-const) 
	// for(deeply copying)

	Person(const Person &other) {  // This will prevent "other" object from being changed in the function body 
		name = other.name;
		age = other.age;
	}



	//constructor
	Person(string name, int age) :
		name(name), age(age) // directly initialize our member variables
	{
		// No need for assignments here
	}

	void print() const {
		cout << name << ": " << age << flush;
	}

	//operator overloading

	bool operator<(const Person &other)  const {

		if(name == other.name) {
			return age < other.age;
		}
		else {
			return name < other.name;
		}	
	}
};

int main() {

	map <Person, int> people;

	people[Person("Mike", 40)] = 40;
	people[Person("Mike", 50)] = 2000;
	people[Person("Sue", 30)] = 30;
	people[Person("Raj", 20)] = 20;

	for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}


    return 0;
}

