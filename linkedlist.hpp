/*File Name LinkedList.hpp
Author: David Fields
Purpose: Stores the prototypes for LinkedList.cpp
*/

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <string>
#include <list>
#include <fstream>
#include <iostream>
#include "county.hpp"
using namespace std;
template<class T>

class LinkedList{
    private:
    struct ListNode
    {  
        LinkedList *head;
        LinkedList *tail;
    };

    ListNode* next;
    ListNode* previous;

    public:
        LinkedList getNext(ListNode*){ // The temptation to name it getHead was real.
            return next;
        }
        LinkedList getPrevious(ListNode*){
            return previous;
        }
        void setNext(LinkedList* nextPtr){
            this->next = nextPtr;
        }
        void setPrevious(LinkedList* lastPtr){
            this->previous= lastPtr;
        }

        void appendIntoList(string);
        void prependIntoList(string);
        void insertIntoList(string);
        void removeFromList(string, int);
        void swapPositions(int, int);
        friend int sortingFunction(int);
        friend ostream& operator<<(ostream& o, const LinkedList<T>& Ll);
};

#endif