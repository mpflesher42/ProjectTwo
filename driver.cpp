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
        //LinkedList<typename whatever> variableName;

        switch (choice) {
            case 1:
                //getNext
                break;
            case 2:
                //getLast
                break;
            case 3:
                //setNext
                break;
            case 4:
                //setLast
                break;
            case 5:
                //appendIntoList
                break;
            case 6:
                //prependIntoList
                break;
            case 7:
                //insertIntoList
                break;
            case 8:
                //removeFromList
                break;
            case 9:
                //swapPositions
                break;
            case 10:
                //sortingFunction
                break;
            case 11:
                //save
                break;
            case 12:
                //load
                break;
            default:
                cout << "\nThat was not a valid choice. Please choose a number between 1-6:\t" << endl;;
                break;
        }

    //change numeber based on needed menu options
    } while (choice != 6);

    return 0;
}