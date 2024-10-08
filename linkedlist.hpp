#ifndef LINKED_LIST_H
#define LINKED_LINK_H
#include <string>
#include <list>
#include<fstream>
using std::string;
class LinkedList{
    private:
    LinkedList *head;
    LinkedList *tail;
    string word;
    int index;
    public:
        LinkedList getHeadPointer(LinkedList* headPtr){ // The temptation to name it getHead was real.
            return *headPtr;
        }
        LinkedList getTailPointer(LinkedList* tailPtr){
            return *tailPtr;
        }
        void setHeadPointer(LinkedList*);
        void setTailPointer(LinkedList*);
        string appendList(string);
        string prependList(string);
        string insertList(string);
        int removeFromList(string, int);
        friend int sortingFunction(int);
        friend ostream& operator<<(ostream& out  const LinkedList& ll);

};
#endif