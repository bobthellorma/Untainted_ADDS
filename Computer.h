#ifndef _COMPUTER_H
#define _COMPUTER_H
#include "Player.h"

class Computer : public Player{

    public:
    Computer();
    char makeMove();

};


#endif