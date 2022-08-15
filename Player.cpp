#include "Player.h"
#include "Human.h"
#include <iostream>

Player::Player()
{
    // do nothing
}

char Player::makeMove()
{
    char tempMove;

    // adding a comment
    
    std::cout << "Enter move: ";
    std::cin >> tempMove;
    
    return tempMove;
}

void Player::printOut()
{
    std::cout << "I am here";
}

void Player::Reset()
{
    // do nothing
}