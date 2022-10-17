#include "Node.h"
#include <cstddef>

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

void Node::set_next(Node* newnode)
{
    next = newnode;
}

Node::Node()
{
    data = 0;
    next = nullptr;
}