#ifndef LINKED_LIST_H
#define LINKED_LINK_H
#include <string>
#include <list>
#include<fstream>
using namespace std;
class LinkedList{
    private:
    struct ListNode
    {  
        LinkedList *next;
        LinkedList *last;
        string word;
        int index;
    };
    ListNode* head;
    ListNode* tail;
    public:
        LinkedList getNext(LinkedList*){ // The temptation to name it getHead was real.
            return *next;
        }
        LinkedList getLast(LinkedList*){
            return *last;
        }
        void setNext(LinkedList* nextPtr){
            this->next = nextPtr;
        }
        void setLast(LinkedList* lastPtr){
            this->last = lastPtr;
        }
        void appendList(string);
        void prependList(string);
        void insertList(string);
        void removeFromList(string, int);
        friend int sortingFunction(int);
        friend ostream& operator<<(ostream& o, const LinkedList& Ll);

};
#endif