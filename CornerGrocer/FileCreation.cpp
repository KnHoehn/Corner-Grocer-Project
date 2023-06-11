#include "FileCreation.h"
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

void FileCreation() {

	/*
	   The purpose of this function is to create a back up file of items purchased
	   and their frequency from a file of items purchased for the day
	*/

	ifstream inFS;
	ofstream outFS;
	int frequency;
	string itemName;
	map<string, int> itemsPurchased;
	map<string, int>::iterator iter;

	inFS.open("CS210_Project_Three_Input_File.txt"); // Opens file for reading
	outFS.open("frequency.dat");                     // Opens file for writing

	// While loop that executes until the end of file is reached and counts 
	// the frequency of all items and stores it in a map
	while (!inFS.eof()) {
		inFS >> itemName;
		frequency = 0;
		itemsPurchased.emplace(itemName, frequency);
		if (itemsPurchased.find(itemName) != itemsPurchased.end()) {
			itemsPurchased[itemName]++;
		}
	}

	// Iterates through the map and writes each item and their frequency into a file
	for (iter = itemsPurchased.begin(); iter != itemsPurchased.end(); iter++) {

		outFS << iter->first << " ";
		outFS << iter->second << endl;

	}

	inFS.close();
	outFS.close();
}