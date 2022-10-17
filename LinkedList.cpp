#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <limits>
#include <cstddef>

void LinkedList::addFront(int newItem)
{
    Node newnode = Node();
    newnode.set_next(head);
    newnode.set_data(newItem);
    head = &newnode;
}

void LinkedList::addEnd(int newItem)
{
    Node newnode = Node(); // create node
    newnode.set_data(newItem); // make data the same

    if(head == nullptr)
    {
        head = &newnode;
    }
    else
    {
        Node* temp = head;
        while(temp->get_next() != nullptr)
        {
            temp = temp->get_next();
        }
        temp->set_next(&newnode);
    }
}

void LinkedList::addAtPosition(int position, int newItem)
{
    Node newnode = Node();
    newnode.set_data(newItem);

    if(position <= 1 || head == nullptr)
    {
        head = &newnode;
    }
    else
    {
        Node* temp = head;
        int counter = 0;
        while(temp->get_next() != nullptr && counter <= position)
        {
            temp = temp->get_next();
            counter++;
        }
        temp->set_next(&newnode);
    }
}

int LinkedList::search(int Item)
{
    int counter = 0;
    bool condition = 0;
    Node* temp = head;
    while(temp->get_next() != nullptr && condition == 0)
    {
        if (temp->get_data() == Item)
        {
            std::cout << counter << " ";
            return counter;
        }
        temp = temp->get_next();
        counter++;
    }
    std::cout << condition << " ";
    return 0;
}

void LinkedList::deleteFront()
{
    Node* temp = head;
    Node* next = head->get_next();
    head = next;
    free(temp);
    return;
}

void LinkedList::deleteEnd()
{
    Node* temp = head;
    while(temp->get_next() != nullptr)
    {
        temp = temp->get_next();
        if(temp->get_next() == nullptr)
        {
            Node* tbdeleted = temp->get_next();
            temp->get_next() == nullptr;
            free(tbdeleted);
            return;
        }
    }
}

void LinkedList::deletePosition(int position)
{
    if (position < 1)
    {
        std::cout << "outside range";
    }

    Node* temp = head;
    int counter = 0;
    while(temp->get_next() != nullptr)
    {
        if (counter == position-1)
        {
            Node* tbdeleted = temp->get_next();
            Node* second = tbdeleted->get_next();
            temp->set_next(second);
            free(tbdeleted);
            return; 
        }
        temp = temp->get_next();
        counter++;
    }
    std::cout << "outside range";
}

int LinkedList::getItem (int position)
{
    Node* temp = head;
    int counter = 0;
    while(temp->get_next() != nullptr)
    {
        if (counter == position)
        {
            std::cout << temp->get_data() << " ";
            return temp->get_data(); 
        }
        temp = temp->get_next();
        counter++;
    }
    std::cout << std::numeric_limits<int>::max() << " ";
    return std::numeric_limits<int>::max();
}

void LinkedList::printItems()
{
    Node* temp = head;
    while(temp->get_next() != nullptr)
    {
        std::cout << temp->get_data() << " ";
        temp = temp->get_next();
    }
    return;
}

// Constructors
LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::LinkedList(int array[], int size)
{ 
    head = nullptr;
    for (int i = 0; i < size; i++)
    {
        addEnd(array[i]);
    }
}

LinkedList::~LinkedList()
{
}