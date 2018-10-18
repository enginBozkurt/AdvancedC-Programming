// vectorsAndMemory.cpp

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;




int main() {

	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;

	int capacity = numbers.capacity();

	cout << "Capacity: " << capacity << endl;

	for (int i = 0; i < 10000; i++) {

		if (numbers.capacity() != capacity) {

			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i);

	}

	//remove all the elements of the vector
	//numbers.clear();


	//Resizes the container so that it contains n elements.
	//this function changes the actual content of the container by inserting or erasing elements from it.
	//numbers.resize(100);



	//Requests that the vector capacity be at least enough to contain n elements
	//If n is greater than the current vector capacity, the function causes the container to reallocate its storage 
	//increasing its capacity to n (or greater).
	numbers.reserve(100000);

	cout << numbers[2] << endl;

	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

    return 0;
}

