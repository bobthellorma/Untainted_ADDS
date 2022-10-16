#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <limits>

void LinkedList::addFront(int newItem)
{
    Node newnode = Node::Node();
    newnode.set_next = head;
    newnode.set_data = newItem;
    head = &newnode;
}

void addEnd(int newItem)
{
    Node newnode = Node::Node();
    newnode.set_next = NULL;
    newnode.set_data = newItem;

    if(head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node* temp = head;
        while(temp.get_next() != NULL)
        {
            temp = temp->get_next;
        }
        temp->set_next(&newnode);
    }
}

void LinkedList::addAtPosition(int position, int newItem)
{
    Node newnode = Node::Node();
    newnode.set_data = newItem;

    if(positon <= 1 || head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node* temp = head;
        int counter = 0;
        while(temp.get_next() != NULL && counter <= position)
        {
            temp = temp->get_next;
            counter++;
        }
        temp->set_next(&newnode);
    }
}

int search(int Item)
{
    int counter = 0;
    bool condition = 0;
    Node* temp = head;
    while(temp.get_next() != NULL && condition == 0)
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

void deleteFront()
{
    Node* temp = head;
    Node* next = head.get_next();
    head = next;
    free(temp)
    return;
}

void deleteEnd()
{
    Node* temp = head;
    while(temp.get_next() != NULL)
    {
        temp = temp->get_next();
        if(temp->get_next() == NULL)
        {
            Node* tbdeleted = temp->get_next();
            temp.get_next() == NULL;
            free(tbdeleted);
            return;
        }
    }
}

void deletePosition(int position)
{
    if (position < 1)
    {
        std::cout << "outside range";
    }

    Node* temp = head;
    int counter = 0;
    while(temp.get_next() != NULL)
    {
        if (counter == position-1)
        {
            Node* tbdeleted = temp->get_next();
            Node* second = tbdeleted->get_next();
            temp->get_next() = second;
            free(tbdeleted);
            return; 
        }
        temp = temp->get_next();
        counter++;
    }
    std::cout << "outside range";
}

int getItem (int position)
{
    Node* temp = head;
    int counter = 0;
    while(temp.get_next() != NULL)
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

void printItems()
{
    Node* temp = head;
    while(temp.get_next() != NULL)
    {
        std::cout << temp->get_data() << " ";
    }
}

// Constructors
LinkedList::LinkedList()
{
    head = NULL;
}

LinkedList(int array[], int size)
{ 
    if (size < 1)
    {
        head = NULL;
    }
    else
    {
        // set up the head
        int count = 1;
        Node first;
        head = &first;
        first.set_data(array.at(0));
        Node* temp = head;

        // while loop to fill rest
        while(count <= size)
        {
            Node newnode;
            temp->get_next() = &newnode;
            
            temp->set_data(array.at(count));
            count++;
        }
    }
}

~LinkedList()
{

}