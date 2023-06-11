/*
Developer: Kayla Hoehn
Date: 04/14/2023
Program Purpose:
                The purpose of this program is to read a file of purchases of the
				day and print the frequency in which items are purchased dependant 
				on the option the user chooses
*/

#include <iostream> 
#include <fstream>
#include "DisplayMenu.h"
#include "ItemFrequency.h"
#include "ListOfItemsFrequency.h"
#include "ItemFrequencyHistogram.h"
#include "FileCreation.h"

using namespace std;

int main() {
	int userMenuInput;

	FileCreation(); // Accesses the FileCreation function

	DisplayMenu(); // Accesses the DisplayMenu function

	cin >> userMenuInput; // Gets input from the user for menu selection
	cout << " " << endl;

	switch (userMenuInput) {
	case 1: // If uses enters "1", accesses the ItemFrequency function
		ItemFrequency(); 
		break;
	case 2: // If user enters "2", accesses the ListOfItemsFrequency function
		ListOfItemsFrequency(); 
		break;
	case 3: // If user enters "3", accesses the ItemFrequencyHistogramFunction
		ItemFrequencyHistogram(); 
		break;
	case 4: // If user enters "4", exits the program
		cout << "Goodbye" << endl; 
		break;
	}

	return 0;
}