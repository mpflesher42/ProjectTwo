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
        typeShit data;
    };
    ListNode* head;
    ListNode* tail;
    
public:

    storage::storage(){// default constructor
        head = NULL;
        tail = NULL;
    }
    void getHead(); //hehe
    void getTail(); 
    void setHead();
    void setTail();
    void goForward():
    void goBack();
    void setData();
    void goNext();
    void goLast();
};

#endif