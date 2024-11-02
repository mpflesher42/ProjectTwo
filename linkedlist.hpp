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
        class ListNode
        {  
            private:
                T data;
                ListNode* next;
                ListNode* previous;
                ListNode (T value) : data(value), next(nullptr), previous(nullptr) {}
            public:
            ListNode getNext(ListNode*){ // The temptation to name it getHead was real.
                return next;
            }
                    LinkedList::ListNode getPrevious(ListNode*){
                return previous;
            }
            void setNext(ListNode* nextPtr){
                this->next = nextPtr;
            }
            void setPrevious(ListNode* lastPtr){
                this->previous= lastPtr;
            }
        };

        ListNode* head;
        ListNode* tail;

    public:
    LinkedList() : head(nullptr), tail(nullptr) {}

        void appendIntoList(T);
        void prependIntoList(T);
        void insertIntoList(T, int);
        void removeFromList(string, int);
        void swapPositions(int, int);
        int sortingFunction();

        friend ostream& operator<<(ostream& o, const LinkedList<T>& Ll);
};

#endif