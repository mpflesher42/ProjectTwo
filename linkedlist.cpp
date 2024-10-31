/*File Name: LinkedList.cpp
Author Name: David Fields
Purpose: provides the source code for the LinkedList functiona in LinkedList.hpp
*/
#include "linkedlist.hpp"
template<typename something>
void appendIntoList(something thingToAppend){

    ListNode* nextPtr;
    ListNode* lastPtr;
    newNode = new ListNode; //memory allocation and setting variables
    newNode->next = NULL;
    newNode->last = NULL;
    if(!head){ // if the head pointer is not found
        head = newNode;
        tail = newNode;
    }else{ // if the head pointer is found
        tail->next = newNode;
        newNode->last = tail;
    }

}
template<typename something>
void LinkedList<something>::prependIntoList(string thingToPrepend){
    ListNode* nodePtr;
    ListNode* newNode;
    newNode = new nodePtr; // memory allocation and setting the varaibles
    newNode->next = NULL;
    newNode->last = NULL;
    if(!tail){ // if the the tail pointer is not found
        tail = newNode;
        head = newNode;
    }else{ // if the tail pointer is found
        head->next = newNode;
        newNode->last = head;
    }
}
template<typename something>
void insertIntoList(string thingToInsert, int position){
    ListNode* nodePtr;
    ListNode* newNode;

    newNode = new nodePtr; // allocates memory for a new node pointer
    newNode->index = position; // setting the variables
    newNode->countyName = thingToInsert; 
    if(!head){ // if the head pointer is not found
        if(position = 0){ // in the event that the position has nothing
            cout <<" Placement failed. Please contact your system manager." << endl;
        } 
    }
    head = newNode;
    tail = newNode;
    else{ // if the head pointer is found 
    nodePtr = head;
    int nodeCount = 0;
    if (position == 0){// if there is nothing in the node
        newNode->next = head;
        newNode->position = newNode;
        head = newNode;
    }while(nodePtr != tail && nodeCount < position){
        nodeCount++;
        if(nodeCount==position){// if the thing to insert is already in
            break;
        }
        nodePtr = nodePtr->next;
    }
    if(nodePtr->next = NULL){ // if there is nothing in nodePtr's next
        tail = newNode;
        newNode->next = nodePtr->next;
        newNode->last = nodePtr;
        nodePtr->next = newNode;
    }
    if(newNode->next){ // if there is something in nodePtr's next
        nodePtr = newNode->next;
        nodePtr->last = newNode;
        }
    }
}
template<typename something>
void LinkedList<something>::removeFromList(string thingToRemove, int position){
    ListNode* nodePtr;
    ListNode* lastNode;
    if(!head){ // if head is not found
        return;
    }
    if(head->index == position){ // if head's index is equal to the position
        nodePtr = head->next;
        delete head;
        if(nodePtr != NULL){
            head = nodePtr;
            head->last = NULL;
        }else{
            head = NULL;
        }
    }else{
            nodePtr = head;
            while(nodePtr && nodePtr->index != position){
             lastNode = nodePtr;
             nodePtr = nodePtr->next;
            }
            if(nodePtr){
             if(nodePtr = tail){
                tail = lastNode;
             }
                lastNode->next = nodePtr->next;
              delete nodePtr;
                if(lastNode != tail){
                nodePtr = lastPtr->next;
                nodePtr->last = lastNode;
              }
            }
        }
}
template<typename something>
int sortingFunction(int *usedArray, int size){//selection sort
    int minIndex, minValue, temp;
    for(int start = 0, start < (size-1); start++){
        if(usedArray[]){
            minIndex = start;
            minValue = usedArray[start];
        }
        for(int i = start +1; i<size; i++){
            if(usedArray[i]<min){
                minValue = usedArray[i];
                minIndex = i;
            }
        swap(usedArray[minIndex], usedArray[start]);
        }
    }
}
template<typename something>
void swap(int positionOne, int positionTwo){ // the swap function for the selectionSort code above
    ListNode* nodePtrOne;
    ListNode* nodePtrTwo;
    int tempValue;
    nodePtrOne = head;
    int currentPos = 0;
    while(nodePtrOne != NULL && positionOne != currentPos){
        nodePtrOne = nodePtrOne->next;
        currentPos++;
    }
    nodePtrTwo = head;
    currentPos = 0;
    while(nodePtrTwo != NULL && positionTwo != currentPos){
        nodePtrTwo = nodePtrTwo->next;
        currentPos++;
    }
    tempValue = nodePtrOne->index;
    nodePtrOne->index = nodePtrTwo->index;
    nodePtrTwo->index = tempValue;
}
template<typename something>
ostream& operator<<(ostream& output, const LinkedList<typename something>& Ll){ 
    output << "County: "<< LinkedList.countyName << endl << "Population: "<< LinkedList.population << endl;
    return output;
}
