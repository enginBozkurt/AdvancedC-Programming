// TwoDimensionalVectors

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

	//3 rows 4 columns (initially all elements are sevens.)
	vector< vector<int> > grid(3, vector<int>(4, 7));

	for (int row = 0; row < grid.size(); row++) {
		for (int col = 0; col < grid[row].size(); col++) {

			cout << grid[row][col] << flush; //flush() makes sure the file stream is updated with the data.
		}

		cout << endl;

	}

    return 0;
}

