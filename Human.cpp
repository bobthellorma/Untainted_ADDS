#include "Human.h"
#include <iostream>

Human::Human()
{
    // do nothing
}

char Human::makeMove()
{
    char tempMove;

    // adding a comment
    
    std::cout << "Enter move: ";
    std::cin >> tempMove;

    while (tempMove != 'R' && tempMove != 'P' && tempMove != 'S')
    {
        std::cout << "Enter move: ";
    std::cin >> tempMove;
    } 
    
    return tempMove;
}

void Human::Reset()
{
    // do nothing
}