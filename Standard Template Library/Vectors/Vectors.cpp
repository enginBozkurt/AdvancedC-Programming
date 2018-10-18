// Vectors.cpp 


#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {

	vector<string> strings;

	//push_back effectively increases the container size by one
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for (int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}

	//iterate using vector iterator

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}



	vector<string>::iterator it = strings.begin();

	it += 2;
	cout << *it << endl;


    return 0;
}

