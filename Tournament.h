#ifndef _TOURNAMENT_H
#define _TOURNAMENT_H
#include <array>
#include "Player.h"

class Tournament{
    public:
    Player * run(std::array <Player*, 8> competitors);
};

#endif