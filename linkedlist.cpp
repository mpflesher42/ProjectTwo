#include "linkedlist.hpp"
        
void LinkedList::appendList(something thingToAppend){

    ListNode* nextPtr;
    ListNode* lastPtr;
    newNode = new ListNode;
    newNode->next = NULL;
    newNode->last = NULL;
    if(!head){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        newNode->last = tail;
    }

}
void LinkedList::prependIntoList(string thingToPrepend){
    ListNode* nodePtr;
    ListNode* newNode;
    newNode = new nodePtr;
    newNode->next = NULL;
    newNode->last = NULL;
    if(!tail){
        tail = newNode;
        head = newNode;
    }else{
        head->next = newNode;
        newNode->last = head;
    }
}
void LinkedList::insertIntoList(string thingToInsert, int position){
    ListNode* nodePtr;
    ListNode* newNode;

    newNode = new nodePtr;
    newNode->index = position;
    newNode->countyName = thingToInsert;
    if(!head){
        if(position = 0){
            cout <<" Placement failed. Please contact your system manager." << endl;
        } 
    }
    head = newNode;
    tail = newNode;
    }else{
    nodePtr = head;
    int nodeCount = 0;
    if (position == 0){
        newNode->next = head;
        newNode->position = newNode;
        head = newNode;
    }while(nodePtr != tail && nodeCount < position){
        nodeCount++;
        if(nodeCount==position){
            break;
        }
        nodePtr = nodePtr->next;
    }
    if(nodePtr->next = NULL){
        tail = newNode;
        newNode->next = nodePtr->next;
        newNode->last = nodePtr;
        nodePtr->next = newNode;
    }
    if(newNode->next){
        nodePtr = newNode->next;
        nodePtr->last = newNode;
    }
}
void LinkedList::removeFromList(string thingToRemove, int index){

}
int LinkedList::sortingFunction(int array [], int size){
    //selection sort

}
friend ostream& operator<<(ostream& output, const LinkedList& Ll){
    output << "County: "<< LinkedList.countyName << endl << "Population: "<< LinkedList.population << endl;
    return output;
}
