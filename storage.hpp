#ifndef STORAGE_H
#define STORAGE_H
#include <string>

class storage
{
private:
    string countyName;
    int countyPop;
public:
    storage(string name, int pop)
    {
        countyName = '\0';
        countyPop = NULL;
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