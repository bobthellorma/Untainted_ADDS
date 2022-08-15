#include "Player.h"
#include "Human.h"
#include <iostream>
#include <string>

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

void Player::type_message(std::string mes)
{
    message = mes;
}

void Player::printOut()
{
    std::cout << message << std::endl;
}

void Player::Reset()
{
    // do nothing
}