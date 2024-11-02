/*
    File Name: Driver.cpp
    Author Name: Mal Flesher
    Date: 11/1/2024
    Purpose: A program for storing and sorting through fantasy counties
*/

#include "county.hpp"
#include "linkedlist.hpp"
using namespace std;

int main() {

    //variables
    int choice = 0;
    string countyName;
    int countyPop, index=0;
    County county;
    string fileName = "counties.txt";

    LinkedList<County> countyData;

    //beginning of program
    cout << "\nWelcome to Fantasy County List" << endl;
    cout << "Lets start with creating your county" << endl;
    cout << "\tName of County:\t";
    countyName = county.getName(countyName);
    county.setName(countyName);
    cout << "\tPopulation of County:\t";
    countyPop = county.getPop();
    county.setPop(countyPop);

    //user menu options
    do {
        cout << "What would you like to do with your county?" << endl; //add in options
        cout << "1.\tAdd to end of list" << endl;
        cout << "2.\tAdd to front of list" << endl;
        cout << "3.\tAdd to anywhere in list" << endl;
        cout << "4.\tRemove from anywhere in list" << endl;
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

        switch (choice) {
            case 1: //Add to end of list
                //appendIntoList<County>(countyData->getName());
                countyData.appendIntoList(County(countyName, countyPop));
                break;
            case 2: //Add to front of list
                //LinkedList<T> prependIntoList(countyData->getName());
                countyData.prependIntoList(County(countyName, countyPop));
                break;
            case 3: //Add to anywhere in list
                //LinkedList<T> insertIntoList(countyData->getName());
                cout << "\tEnter the index:\t";
                cin >> index;
                cin.ignore();
                countyData.insertIntoList(County(countyName, countyPop), index);
                break;
            case 4: //Remove from anywhere in list
                //LinkedList<T> removeFromList(countyData->getName(),countyData->getPop());
                cout << "\tEnter the index:\t";
                cin >> index;
                cin.ignore();
                countyData.removeFromList(countyName, index);
                break;
            case 5: //Sort list
                //LinkedList<T> sortingFunction(countyData->getIndex(),countyData->getPop());
                countyData.sortingFunction();
                break;
            case 6: //Save list
                save(fileName, countyData);
                break;
            case 7: //Load previous list
                load(fileName, countyData);
                break;
            default: //End Program
                cout << "\nThat was not a valid choice. Please choose a number between 1-6:\t" << endl;;
                break;
        }

        if (choice < 1 || choice > 3) {
            cout << "Creating your county" << endl;
            cout << "\tName of County:\t";
            countyName = county.getName(countyName);
            county.setName(countyName);
            cout << "\tPopulation of County:\t";
            countyPop = county.getPop();
            county.setPop(countyPop);
        }

    } while (choice != 8);

    return 0;
}