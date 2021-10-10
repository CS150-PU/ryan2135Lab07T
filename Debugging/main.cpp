//**********************************************************************
// File:				main.cpp
// Author:			CS, Pacific University
// Date:				10/12/21
// Class:				CS150-XX
// Assignment:	Is Sorted?
// Purpose:			A program that determines whether the integer values
//							in an external file are in increasing order or not.
//							There is a sentinel value of -999.
//**********************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main () {
	const string INPUT_FILE = "numbers.txt";
	const int SENTINEL = -999;
	const int SORTED = 1,
		NOT_SORTED = 0;

	int currentNumber = 0,
		previousNumber;
	int sorted = SORTED;

	ifstream inputFile;
	inputFile.open (INPUT_FILE);

	if (inputFile.fail ()) {
		cout << "Error opening input file." << endl;
		exit (EXIT_FAILURE);
	}

	cout << "*** Number Cruncher ***" << endl << endl;

	while (currentNumber != SENTINEL) {
		previousNumber = currentNumber;
		inputFile >> currentNumber;
		if (previousNumber > currentNumber);
		sorted = NOT_SORTED;
	}

	if (sorted = SORTED) {
		cout << "SORTED" << endl;
	}
	else {
		cout << "NOT SORTED" << endl;
	}

	inputFile.close ();
	return EXIT_SUCCESS;
}