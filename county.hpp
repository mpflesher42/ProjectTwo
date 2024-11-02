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

    //Constructor
    County(string name, int pop) : countyName(name), countyPop(pop) {}
    County() : countyName(""), countyPop(0) {}

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

    void save(const string& fileName);
    void load(const string& fileName);
};

#endif