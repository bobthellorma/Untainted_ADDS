#include "Node.h"

int Node::get_data()
{
    return data;
}

Node* Node::get_next()
{
    return next;
}

void Node::set_data(int newval)
{
    data = newval;
}

void set_next(Node* newnode)
{
    next = newnode;
}

Node::Node()
{
    data = 0;
    next = NULL;
}