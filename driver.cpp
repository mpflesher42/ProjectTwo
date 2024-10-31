/*
    File Name: Driver.cpp
    Author Name: Mal Flesher
    Date: 11/1/2024
    Purpose: A program for storing and sorting
             through fantasy counties
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
        cout << "1.\tAppend to list" << endl;
        cout << "2.\tPrepend to list" << endl;
        cout << "3.\tAdd to list." << endl;
        cout << "4.\tRemove from list" << endl;
        cout << "5.\tSort list" << endl;
        cout << "6.\tSave list" << endl;
        cout << "7.\tLoad previous list" << endl;
        cout << "8.\tEnd Program" << endl;
        cout << "Choose 1-8:\t";
        cin >> choice;

        //validating user input
        if (choice < 1 || choice > 8) {
            cout << "\n\tInvaild Choice" << endl;
            cout << "\tChoose 1-11:\t";
            cin >> choice;
        }
        cin.ignore();
        
        
        //LinkedList<typename whatever> variableName;

        switch (choice) {
            case 1:
                //appendIntoList
                break;
            case 2:
                //prependIntoList
                break;
            case 3:
                //insertIntoList
                break;
            case 4:
                //removeFromList
                break;
            case 5:
                //sortingFunction
                break;
            case 6:
                //save
                break;
            case 7:
                //load
                break;
            default:
                cout << "\nThat was not a valid choice. Please choose a number between 1-6:\t" << endl;;
                break;
        }

    //change numeber based on needed menu options
    } while (choice != 8);

    return 0;
}