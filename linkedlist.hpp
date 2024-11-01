/*File Name LinkedList.hpp
Author: David Fields
Purpose: Stores the prototypes for LinkedList.cpp
*/

#ifndef LINKEDLIST_HPP
#define LINKEDLINK_HPP
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
        LinkedList *next;
        LinkedList *last;
        string countyName;
        int population;
        int index;
    };
    ListNode* head;
    ListNode* tail;
    public:
        LinkedList getNext(LinkedList*){ // The temptation to name it getHead was real.
            return next;
        }
        LinkedList getLast(LinkedList*){
            return last;
        }
        void setNext(LinkedList* nextPtr){
            this->next = nextPtr;
        }
        void setLast(LinkedList* lastPtr){
            this->last = lastPtr;
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