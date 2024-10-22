#ifndef STORAGE_H
#define STORAGE_H
#include<string>
template<typename typeShit>
class storage
{
private:
    struct ListNode
    {
        ListNode* next;
        ListNode* last;
        string countyName;
        int population;
    };
    ListNode* head;
    ListNode* tail;
    
public:

    storage::storage(){// default constructor
        head = NULL;
        tail = NULL;
    }
};

#endif