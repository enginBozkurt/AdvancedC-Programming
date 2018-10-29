// Pointers And Array

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main() {

	string texts[] = { "one", "two", "three" };

	string *pTexts = texts;

	// Loop through an array using a pointer, with array element reference syntax
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	// Loop through an array by incrementing a pointer
	for (int i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++) {
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElement = &texts[0];  //getting the adress of the first element in the array
	string *pEnd = &texts[2];     //getting the adress of the last element in the array

	// Loop through an array, stopping by comparing two pointers
	while (true) {
		cout << *pElement << " " << flush;

		if (pElement == pEnd) {
			break;
		}

		pElement++;
	}

	cout << endl;

    return 0;
}
