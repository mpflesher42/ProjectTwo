/*
    File Name: Driver.cpp
    Author Name: Mal Flesher
    Date: 11/1/2024
    Purpose: 
*/

#include "county.hpp"
#include "linkedlist.hpp"
#include <iostream>
using namespace std;

int main() {

    //variables
    int choice = 0;

    //beginning of program
    cout << "\nWelcome to Fantasy County List" << endl;

    //user menu options
    do {
        cout << "What would you like to do with your county?" << endl; //add in options

        switch (choice) {
            case 1:
                //call other case 1 functions and get other needed prompts from user
                break;
            default:
                cout << "\nThat was not a valid choice. Please choose a number between 1-6:\t" << endl;;
                break;
        }

    //change numeber based on needed menu options
    // LinkedList<typename whatever> variableName;
    } while (choice != 6);

    return 0;
}