#include <iostream>

// Head Recursion for a function that returns the sum
int addHead(int upTo)
{
    if(upTo < 2)
    {
        return 1;
    }
    return upTo+addHead(upTo-1);
}

// Tail Recursion for a function that returns the sum
// lecturers method has 'return acc += upTo' and then addTail(upTo-1,acc) but both work
int addTail(int upTo, int acc)
{
    if(upTo < 1)
    {
        return acc;
    }
    return addTail(upTo-1,acc += upTo);
}

int main()
{
    std::cout << addTail(4,0) << std::endl;
    std::cout << addHead(4) << std::endl;
}