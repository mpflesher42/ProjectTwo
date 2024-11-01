/*File Name: LinkedList.cpp
Author Name: David Fields
Purpose: provides the source code for the LinkedList functions in LinkedList.hpp
*/
#include "linkedlist.hpp"
template<typename something>
void appendIntoList(something thingToAppend){

    ListNode* nextPtr;
    ListNode* lastPtr;
    newNode = new ListNode; //memory allocation and setting variables
    newNode->forwards = NULL;
    newNode->backwards = NULL;
    if(!head){ // if the head pointer is not found
        head = newNode;
        tail = newNode;
    }else{ // if the head pointer is found
        tail->forwards = newNode;
        newNode->backwards = tail;
    }

}
template<typename something>
void LinkedList<something>::prependIntoList(string thingToPrepend){
    ListNode* nodePtr;
    ListNode* newNode;
    newNode = new nodePtr; // memory allocation and setting the varaibles
    newNode->forwards = NULL;
    newNode->backwards = NULL;
    if(!tail){ // if the the tail pointer is not found
        tail = newNode;
        head = newNode;
    }else{ // if the tail pointer is found
        head->forwards = newNode;
        newNode->backwards = head;
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
        newNode->forwards = head;
        newNode->position = newNode;
        head = newNode;
    }while(nodePtr != tail && nodeCount < position){
        nodeCount++;
        if(nodeCount==position){// if the thing to insert is already in
            break;
        }
        nodePtr = nodePtr->forwards;
    }
    if(nodePtr->forwards = NULL){ // if there is nothing in nodePtr's forwards
        tail = newNode;
        newNode->forwards = nodePtr->forwards;
        newNode->backwards = nodePtr;
        nodePtr->forwards = newNode;
    }
    if(newNode->forwards){ // if there is something in nodePtr's forwards
        nodePtr = newNode->forwards;
        nodePtr->backwards = newNode;
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
        nodePtr = head->forwards;
        delete head;
        if(nodePtr != NULL){ // if head is not equal to NULL
            head = nodePtr;
            head->backwards = NULL;
        }else{// if head is equal to NULL
            head = NULL;
        }
    }else{// if head is found
            nodePtr = head;
            while(nodePtr && nodePtr->index != position){
             lastNode = nodePtr;
             nodePtr = nodePtr->forwards;
            }
            if(nodePtr){// if nodePtr is found
             if(nodePtr = tail){// if the nodePtr is the tail
                tail = lastNode;
             }
                lastNode->forwards = nodePtr->forwards;
              delete nodePtr;
                if(lastNode != tail){// if the lastNode(previousNode) is not the tail
                nodePtr = lastPtr->forwards;
                nodePtr->backwards = lastNode;
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
        nodePtrOne = nodePtrOne->forwards;
        currentPos++;
    }
    nodePtrTwo = head;
    currentPos = 0;
    while(nodePtrTwo != NULL && positionTwo != currentPos){
        nodePtrTwo = nodePtrTwo->forwards;
        currentPos++;
    }
    tempValue = nodePtrOne->index;
    nodePtrOne->index = nodePtrTwo->index;
    nodePtrTwo->index = tempValue;
}
template<typename something>
ostream& operator<<(ostream& output, const LinkedList<something>& Ll){ 
    output << "County: "<< LinkedList.countyName << endl << "Population: "<< LinkedList.population << endl;
    return output;
}
