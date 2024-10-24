#include "storage.hpp"
#include "linkedlist.hpp"
#include <iostream>
using namespace std;

int main(){

    //variables
    int choice = 0;

    //user menu
    do {
        cout << "What would you like to do with your county?" //add in options

        switch (choice) {
            case 1:
                //call other case 1 functions and get other needed prompts from user
                break;
            default:
                cout << "\nThat was not a valid choice. Please choose a number between 1-6:\t";
                break;
        }

    } while (choice != 6);
    //change numebr based on needed menu options

    return 0;
}