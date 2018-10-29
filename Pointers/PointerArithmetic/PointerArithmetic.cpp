// Pointer Arithmetic

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	//the number of elements in the array
	const int NSTRINGS = 5; 

	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string *pTexts = texts; //the pointer indicates the first element of the array("one")

	pTexts += 3;

	cout << *pTexts << endl;   //four

	pTexts -= 2;

	cout << *pTexts << endl;  //two

	string *pEnd = &texts[NSTRINGS]; // out of the array.(valid if not writing or read to/from memory)

	pTexts = &texts[0];

	//traversing all the elements in the array
	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}

	// Set pTexts back to start.
	pTexts = &texts[0];

	//subtract pointers to find the number of elements
	long elements = (long)(pEnd - pTexts);

	cout << elements << endl;  //5

	// Set pTexts back to start.
	pTexts = &texts[0];

	pTexts += NSTRINGS / 2;
	cout << *pTexts << endl;       //middle element in the array (3)

    return 0;
}

