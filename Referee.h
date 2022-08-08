#include "Computer.h"
#include "Human.h"

#ifndef _REFEREE_H
#define _REFEREE_H


class Referee{

    public:
    Referee();
    char refGame(Human Player1, Computer Player2);
    
};


#endif