#ifndef COUNTY_H
#define COUNTY_H
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
        countyName = name;
        countyPop = pop;
    }

    string getName()
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

#endif