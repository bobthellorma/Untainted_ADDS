#ifndef _NODE_H
#define _NODE_H

class Node
{
    private:
    int data;
    Node* next;

    public:
    int get_data();
    Node* get_next();
    void set_data(int newval);
    void set_next(Node* newnode);
    Node()
};

#endif