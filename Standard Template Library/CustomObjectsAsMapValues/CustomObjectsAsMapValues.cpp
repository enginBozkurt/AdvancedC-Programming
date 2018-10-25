// CustomObjectsAsMapValues

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


	//constructor
	Person(string name, int age) :
		name(name), age(age) // directly initialize our member variables
	{
		// No need for assignments here
	}

	void print() {
		cout <<name << ": " << age <<endl;
	}

};

int main() {

	map<int, Person> people; // Person class as the values of the map

	people[0] = Person("Mike", 25);
	people[1] = Person("Vicky", 23);
	people[2] = Person("Raj", 40);

	people.insert(make_pair(3, Person("Engin", 35)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->first << ": " << flush;

		it->second.print();
	}

    return 0;
}

