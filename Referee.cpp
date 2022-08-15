#include "Referee.h"

char Referee::refGame(Player* Player1, Player* Player2)
{
    char Move1 = Player1->makeMove();
    char Move2 = Player2->makeMove();

    // two moves are the same
    if (Move1 == Move2)
    {
        return 'D';
    }

    // first player goes rock
    if (Move1 == 'R')
    {
        if (Move2 == 'P')
        {
            return 'L';
        }
        return 'W';
    }

    // first player goes paper
    else if (Move1 == 'P')
    {
        if (Move2 == 'R')
        {
            return 'L';
        }
        return 'W';
    }

    // first player goes scissors
    if (Move2 == 'P')
    {
        return 'L';
    }
    return 'W';
}