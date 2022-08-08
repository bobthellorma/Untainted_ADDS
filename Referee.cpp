#include "Referee.h"
#include "Human.h"
#include "Computer.h"

Referee::Referee()
{
    // set nothing
}

char Referee::refGame(Human Player1, Computer Player2)
{
    char humanMove = Player1.getMove();
    char compMove = Player2.getMove();

    if (compMove == humanMove)
    {
        return 'D';
    }

    else if (humanMove == 'P')
    {
        return 'L';
    }

    else
    {
        return 'W';
    }
}