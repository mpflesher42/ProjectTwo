/*File Name: LinkedList.cpp
Author Name: David Fields
Purpose: provides the source code for the LinkedList functions in LinkedList.hpp
*/

#include "linkedlist.hpp"
using namespace std;

template<typename T>
void appendIntoList(T data){
    ListNode* nextPtr;
    ListNode* lastPtr;
    newNode = new ListNode; //memory allocation and setting variables
    newNode->next = NULL;
    newNode->previous = NULL;

    if(!head){ // if the head pointer is not found
        head = newNode;
        tail = newNode;
    }

    else{ // if the head pointer is found
        tail->next = newNode;
        newNode->previous = tail;
        tail = newNode;
    }

}

template<typename T>
void LinkedList<T>::prependIntoList(T data){
    ListNode* nodePtr;
    ListNode* newNode;
    newNode = new nodePtr; // memory allocation and setting the varaibles
    newNode->next = NULL;
    newNode->previous = NULL;

    if(!tail){ // if the the tail pointer is not found
        tail = newNode;
        head = newNode;
    }

    else{ // if the tail pointer is found
        head->next = newNode;
        newNode->previous = head;
    }
}

template<typename T>
void insertIntoList(T data, int poistion){
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
    }

    while(nodePtr != tail && nodeCount < position){
        nodeCount++;

        if(nodeCount==position){// if the thing to insert is already in
            break;
        }
        nodePtr = nodePtr->next;
    }

    if(nodePtr->next = NULL){ // if there is nothing in nodePtr's next
        tail = newNode;
        newNode->next = nodePtr->next;
        newNode->previous = nodePtr;
        nodePtr->next = newNode;
    }

    if(newNode->next){ // if there is T in nodePtr's next
        nodePtr = newNode->next;
        nodePtr->previous = newNode;
        }
    }
}

template<typename T>
void LinkedList<T>::removeFromList(string thingToRemove, int position){
    ListNode* nodePtr;
    ListNode* lastNode;

    if(!head){ // if head is not found
        return;
    }

    if(head->index == position){ // if head's index is equal to the position
        nodePtr = head->next;
        delete head;

        if(nodePtr != NULL){ // if head is not equal to NULL
            head = nodePtr;
            head->previous = NULL;
        }

        else{// if head is equal to NULL
            head = NULL;
        }
    }

    else{// if head is found
            nodePtr = head;
            
            while(nodePtr && nodePtr->index != position){
             lastNode = nodePtr;
             nodePtr = nodePtr->next;
            }

            if(nodePtr){// if nodePtr is found

             if(nodePtr = tail){// if the nodePtr is the tail
                tail = lastNode;
             }

                lastNode->next = nodePtr->next;
              delete nodePtr;

                if(lastNode != tail){// if the lastNode(previousNode) is not the tail
                nodePtr = lastPtr->next;
                nodePtr->previous = lastNode;

              }
            }
        }
}

template<typename T>
int sortingFunction(int *usedArray, int size){//selection sort
    int minIndex, minValue, temp;

    for(int start = 0; start < (size-1); start++){

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

template<typename T>
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

template<typename T>
ostream& operator<<(ostream& output, const LinkedList<T>& Ll){ 
    output << "County: "<< Ll.countyName << endl << "Population: "<< Ll.population << endl;
    return output;
}