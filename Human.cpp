#include "Human.h"
#include <iostream>

char Human::makeMove()
{
    char tempMove;
    
    std::cout << "Enter move: ";
    std::cin >> tempMove;
    
    return tempMove;
}

char Human::getMove()
{
    return Human::Move;
}