// ParsingTextFiles.cpp : Defines the entry point for the console application.
#include "stdafx.h";
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	//input stream object
	ifstream input;

	string fileName = "Text.txt";

	// open file
	input.open(fileName);

	if (!input.is_open()) {

		return 1;

	}

		while(input) {

			string line;

			//read a line from input stream and store in the line object after being read from the stream until the delimiter
			getline(input, line, ':');

			int population;
			input >> population;

			//Discards leading whitespace from an input stream.
			input >> ws;

			if (!input) {
				break;
			}

			cout << "'" << line << "'" << " -- '"<< population << "'"<< endl;
		}

		input.close();

    return 0;
}

