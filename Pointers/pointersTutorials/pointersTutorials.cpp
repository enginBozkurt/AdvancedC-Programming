// pointersTutorials


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void manipulate(double *pValue) {
	cout << "2. Value of double in manipulate: " << *pValue << endl;
	*pValue = 10.0;
	cout << "3. Value of double in manipulate: " << *pValue << endl;
}

int main() {

	int variable = 5;

	int *p = &variable;

	int a[3];

	a[0] = 0;
	a[1] = 20;
	a[2] = 40;

	int *p2 = &a[0];


	cout << "Value of the variable: " << variable << endl;
	cout << "Value of the variable : " << *p << endl;
	cout << "Adress of the variable : " << p << endl;

	//the adresses of the elements in the array
	cout << "The adress of the first element: " << a << endl;
	cout << "The adress of the second element : " << a +1 << endl;
	cout << "The adress of the third element : " << a + 2 << endl;

	//the values of the elements in the array
	cout << "The value of the first element: " << *a << endl;
	cout << "The value of the second element : " << *(a + 1) << endl;
	cout << "The value of the third element : " << *(a + 2) << endl;

	//the values of the elements in the array using another pointer which stores 
	//the first element of the array
	cout << "The value of the first element: " << *p2 << endl;
	cout << "The value of the second element : " << *++p2 << endl;
	cout << "The value of the third element : " << *++p2 << endl;

	cout << "==================" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "4. dValue: " << dValue << endl;

    return 0;
}

