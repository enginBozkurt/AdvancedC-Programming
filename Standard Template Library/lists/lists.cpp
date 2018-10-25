/** In the STL, lists are doubly linked lists. 
* The linked list consists of a series of nodes,  which are not necessarily adjacent in
* memory. These nodes are linked to each other by pointers.
* When traversing in the list, you can not use indexes, you have to use iterators( indicating pointers).
* A doubly linked list whose nodes contain three fields : a value, the link to the next node, 
* and the link to the previous node */


#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;


int main() {

	list<int> numbers;

	// add elements to the end of the list accordingly
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);

	// add element to the front of the list
	numbers.push_front(0);


	// insert an element before an element in the list
	list<int>::iterator it = numbers.begin();
	it++;

	numbers.insert(it, 100);

	cout <<"Element:"<< *it << endl;

	// delete an element in the list
	list<int>::iterator eraseIt = numbers.begin();
	eraseIt++;

	eraseIt = numbers.erase(eraseIt);

	cout << "Element:" << *eraseIt << endl;


	for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {

		if (*it == 2) {
			numbers.insert(it, 1234);  // add element(1234) before the element(2) 
		}

		cout << *it << endl;
	}



	for (list<int>::iterator it=numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}



    return 0;
}

