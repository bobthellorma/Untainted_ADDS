#include "Referee.h"

Referee::Referee()
{
    // set nothing
}

char Referee::refGame(Human Player1, Computer Player2)
{
    char humanMove = Player1.makeMove();
    char compMove = Player2.makeMove();

    if (compMove == humanMove)
    {
        return 'T';
    }

    else if (humanMove == 'S')
    {
        return 'L';
    }

    else
    {
        return 'W';
    }
}