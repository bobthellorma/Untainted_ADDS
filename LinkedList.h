#ifndef _LINKED_LIST
#define _LINKED_LIST
#include "Node.h"

class LinkedList
{
    private:
    Node* head;

    public:

    // functions
    void addFront(int newItem);
    void addEnd(int newItem);
    void addAtPosition(int position, int newItem);
    int search(int Item);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int position);
    int getItem (int position);
    void printItems();

    // constructors & destructors
    LinkedList();
    LinkedList(int array[], int size);
    ~LinkedList();
};

#endif