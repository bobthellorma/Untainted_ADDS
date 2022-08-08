#include "Referee.h"

char Referee::refGame(char compMove, char humanMove)
{
    
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