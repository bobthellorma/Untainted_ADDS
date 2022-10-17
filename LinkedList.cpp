#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <limits>
#include <cstddef>

void LinkedList::addFront(int newItem)
{
    Node* newnode = new Node(); // create new node
    newnode->set_data(newItem); // give node data
    newnode->set_next(head);
    head = newnode;
}

void LinkedList::addEnd(int newItem)
{
    // create newNode
    Node* newNode = new Node();
    newNode->set_data(newItem);
    newNode->set_next(nullptr);

    // if head does point to anything
    if(head == nullptr)
    {
        head = newNode;
    }

    else
    {
        Node* temp = head;
        while (temp->get_next() != nullptr)
        {
            temp = temp->get_next();
        }
        temp->set_next(newNode);
    }
}

void LinkedList::addAtPosition(int position, int newItem)
{
    Node* newnode = new Node(); // create new node
    newnode->set_data(newItem); // give node data

    if(position <= 1 || head == nullptr)
    {
        newnode->set_next(head);
        head = newnode;
    }
    else
    {
        Node* temp = head;
        int counter = 0;
        while(temp->get_next() != nullptr)
        {
            temp = temp->get_next();
            counter++;
            if (counter == position-2)
            {
                newnode->set_next(temp->get_next());
                temp->set_next(newnode);
            }
        }
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
    if(head != nullptr)
    {
        if(head->get_next() == nullptr)
        {
            head = nullptr;
        }
        else
        {
            Node* temp = head;
            while(temp->get_next()->get_next() != nullptr)
            {
                temp = temp->get_next();
            }
            Node* lastNode = temp->get_next();
            temp->set_next(nullptr);
            free(lastNode);
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
    while(temp->get_next()->get_next() != nullptr)
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
    int counter = 1;
    while(temp != nullptr)
    {
        if (counter == position)
        {
            std::cout << temp->get_data() << " ";
            return temp->get_data(); 
        }
        temp = temp->get_next();
        counter++;
        //std::cout << counter << std::endl;
    }
    std::cout << std::numeric_limits<int>::max() << " ";
    return std::numeric_limits<int>::max();
}

void LinkedList::printItems()
{
    Node* temp = head;
    std::cout << head->get_data() << " ";
    while(temp->get_next() != nullptr)
    {
        temp = temp->get_next();
        std::cout << temp->get_data() << " "; 
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
        //std::cout << array[i];
    }
}

LinkedList::~LinkedList()
{
}