#include "Human.h"
#include <iostream>

Human::Human()
{
    // do nothing
}

char Human::makeMove()
{
    char tempMove;
    
    std::cout << "Enter move: ";
    std::cin >> tempMove;
    
    return tempMove;
}
