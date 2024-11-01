/*
    File Name: Driver.cpp
    Author Name: Mal Flesher
    Date: 11/1/2024
    Purpose: A program for storing and sorting through fantasy counties
*/

#include "county.hpp"
#include "linkedlist.hpp"
using namespace std;
template<typename something>

int main() {

    //variables
    int choice = 0;
    string countyName;

    //beginning of program
    cout << "\nWelcome to Fantasy County List" << endl;
    cout << "Lets start with creating your county" << endl;
    cout << "\tName of County:\t";
    countyName = getName();
    setName(countyName);
    cout << "\tPopulation of County:\t";
    countyPop = getPop();
    setPop();

    //user menu options
    do {
        cout << "What would you like to do with your county?" << endl; //add in options
        cout << "1.\tAdd to end of list" << endl;
        cout << "2.\tAdd to front of list" << endl;
        cout << "3.\tAdd to anywhere in list" << endl;
        cout << "4.\tRemove from end of list list" << endl;
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
        
        LinkedList<something> countyData;

        switch (choice) {
            case 1: //Add to end of list
                LinkedList<something> appendIntoList(countyData->getName());
                break;
            case 2: //Add to front of list
                LinkedList<something> prependIntoList(countyData->getName());
                break;
            case 3: //Add to anywhere in list
                LinkedList<something> insertIntoList(countyData->getName());
                break;
            case 4: //Remove from end of list list
                LinkedList<something> removeFromList(countyData->getname(),countyData->getPop());
                break;
            case 5: //Sort list
                LinkedList<something> sortingFunction(countyData->getIndex(),countyData->getPop());
                break;
            case 6: //Save list
                save();
                break;
            case 7: //Load previous list
                load();
                break;
            default: //End Program
                cout << "\nThat was not a valid choice. Please choose a number between 1-6:\t" << endl;;
                break;
        }

        if (choice < 1 || choice > 3) {
            cout << "Creating your county" << endl;
            cout << "\tName of County:\t";
            countyName = getName();
            setName(countyName);
            cout << "\tPopulation of County:\t";
            countyPop = getPop();
            setPop();
        }
        
    } while (choice != 8);

    return 0;
}