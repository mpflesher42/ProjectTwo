#ifndef COUNTY_HPP
#define COUNTY_HPP
#include <string>
#include "linkedlist.hpp"

class County
{
private:
    string countyName;
    int countyPop;
public:
    County county(string name, int pop)
    {
        County newCounty;
        newCounty.countyName = name;
        newCounty.countyPop = pop;
        return newCounty;
    }

    string getName(string countyName)
    {
        return countyName;
    }

    void setName(string name)
    {
        countyName = name;
    }

    int getPop()
    {
        return countyPop;
    }

    void setPop(int pop)
    {
        countyPop = pop;
    }

    void save();
    void load();
};

void save();
void load();
string getName(string);
void setName(string);
int getPop();
void setPop(int);

#endif