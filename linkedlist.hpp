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
template<typename something>

class LinkedList{
    private:
    struct ListNode
    {  
        LinkedList *head;
        LinkedList *tail;
        string countyName;
        int population;
        int index;
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
        void setLast(LinkedList* lastPtr){
            this->previous= lastPtr;
        }

        void appendIntoList(string);
        void prependIntoList(string);
        void insertIntoList(string);
        void removeFromList(string, int);
        void swapPositions(int, int);
        friend int sortingFunction(int);
        friend ostream& operator<<(ostream& o, const LinkedList<something>& Ll);
};

#endif