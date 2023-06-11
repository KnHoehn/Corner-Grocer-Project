#include "ListOfItemsFrequency.h"
#include <fstream>
#include <iostream>
#include <map>

using namespace std;

void ListOfItemsFrequency() {

    /*
      The purpose of this function is to count how many of each item was purchased
      from a file and display each item and their frequency to the user
    */

    ifstream inFS;
    int frequency;
    string itemName;
    map<string, int> itemsPurchased;
    map<string, int>::iterator iter;

    inFS.open("CS210_Project_Three_Input_File.txt"); // Opens file for reading

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

    inFS.close(); // Closes the file

    // for-loop that iterates through each item in the map and displays the items and
    // their frequency to the user
    for (iter = itemsPurchased.begin(); iter != itemsPurchased.end(); iter++) {
        
        cout << iter->first << " ";
        cout << iter->second << endl;
    
    }

}