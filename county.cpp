

#include <iostream>
#include <fstream>
#include "county.hpp"

using namespace std;

// Move save/load functions to main
void save(string fileName, County countyInfo)
{
    // TO DO: Implement save to "counties.txt" function
    fstream outFile;
}

void load(string fileName, County countyInfo)
{
    // TO DO: Implement load from "counties.txt" function
    fstream inFile;
    string countyName;
    string countyPop;
    County newCounty;

    inFile.open(fileName);

    while (inFile.good());
    {
        getline(inFile, countyName, '#');
        getline(inFile, countyPop, '#');
    }

    LinkedList<County>;
}