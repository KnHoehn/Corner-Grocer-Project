#include "ItemFrequency.h"
#include <fstream>
#include <iostream>

using namespace std;

void ItemFrequency() {

    /*
       The purpose of this funciton is to count the number of times an item inputted
       from the user appears in a file of purchases and display how many times that 
       item was purchased
    */

    ifstream inFS;
    string itemName;
    string userItemName;
    int frequency = 0;

    cout << "Enter the item name: "; // Prompts user to input the item they want the frequency of

    cin >> userItemName; // Stores the users input

	inFS.open("CS210_Project_Three_Input_File.txt"); // Opens file for reading

    // While loop that counts the frequency of an item 
    // and executes until the end of file is reached
    while (!inFS.eof()) {
        inFS >> itemName;
        if (!inFS.fail()) {
            if (itemName == userItemName) {
                ++frequency;
            }
        }
    }

    cout << " " << endl;
    cout << frequency; // Displays the frequency to the user

    inFS.close(); // Closes the file

}