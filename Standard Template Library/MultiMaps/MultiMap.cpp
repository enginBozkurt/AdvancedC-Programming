// Multimap is an associative container that contains a sorted list 
// of key-value pairs, while permitting multiple entries with the same key. 
// Sorting is done according to the comparison function Compare, applied to the keys. 
// Search, insertion, and removal operations have logarithmic complexity.


#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>
using namespace std;



int main() {
	multimap<int, string> lookup;

	lookup.insert(make_pair(30, "Mike"));
	lookup.insert(make_pair(10, "Vicky"));
	lookup.insert(make_pair(30, "Raj"));
	lookup.insert(make_pair(20, "Bob"));
	lookup.insert(make_pair(30, "Engin"));

	for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << endl;

	// returns range of elements matching a specific key 
	// Returns a range containing all elements with the given key in the container. 
	// The range is defined by two iterators. One pointing to the first element that is not less than key 
	// and another pointing to the first element greater than key. 

	//pair of iterators
	auto its = lookup.equal_range(30); //C+11 feature

	for (multimap<int, string>::iterator it = its.first; it != its.second; it++) {
		cout << it->first << ": " << it->second << endl;
	}

    return 0;
}

