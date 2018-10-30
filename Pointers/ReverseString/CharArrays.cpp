// Char Arrays & Reversing a String
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	char texts[] = "hello";

	for (int i = 0; i < sizeof(texts); i++) {
		cout << i << ": " << texts[i] << endl;
	}

	int k = 0;

	while (true) {

		if (texts[k] == 0)
			break;
		cout << texts[k] << flush;

		k++;
	}

	cout << endl;

	//reversing a string by using pointers

	char text[] = "hello";

	int nChars = sizeof(text) - 1;  //the number of chars in char array

	char *pStart = text;

	char *pEnd = text + nChars - 1;

	while (pStart < pEnd) {

		//swap the first character with the last character
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}

	cout << "Reversed string: " << text << endl;

    return 0;
}