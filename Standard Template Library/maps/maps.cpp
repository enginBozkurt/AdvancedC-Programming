// maps


#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;


int main() {

	map<string, int> ages;

	ages["John"] = 40;
	ages["Megan"] = 20;
	ages["Alice"] = 30;
	

	// inserting a pair to the map
	ages.insert(make_pair("Engin", 35));

	// traversing elements in map (First Way)
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;
		cout << age.first << ": " << age.second << endl;
	}

	// traversing elements in map (Second Way)
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl; //first is key and secod is value in map
	}

	// map find method searches the container for an element with a key equivalent to k and 
	//returns an iterator to it if found, otherwise it returns an iterator to map::end.

	if (ages.find("Alice") != ages.end()) {
		cout << "Found Alice" << endl;
	}
	else {
		cout << "key not found" << endl;
	}

    return 0;
}
