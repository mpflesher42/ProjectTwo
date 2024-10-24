#ifndef STORAGE_H
#define STORAGE_H
#include<string>
template <typename typeShit>
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
    void setData();
    void goNext();
    void goLast();
};

template<typename typeShit>
void storage<typeShit>::getHead()
// Gets the head of the LL
{

}

template<typename typeShit>
void storage<typeShit>::getTail()
// Gets the tail of the LL
{

}

template<typename typeShit>
void storage<typeShit>::setHead()
// Sets the current location as head of the LL 
{

}

template<typename typeShit>
void storage<typeShit>::setTail()
// Sets the current location as tail of the LL
{

}

template<typename typeShit>
void storage<typeShit>::setData()
// Inserts data to current location of LL
{

}

template<typename typeShit>
void storage<typeShit>::goNext()
// Advances current node forward
{

}

template<typename typeShit>
void storage<typeShit>::goLast()
// Advances current node backward
{

}

#endif