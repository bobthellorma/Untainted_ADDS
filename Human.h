#ifndef _HUMAN_H
#define _HUMAN_H
#include "Player.h"

class Human : public Player{

    public:
    Human();
    void Reset();
    char makeMove();

};

#endif