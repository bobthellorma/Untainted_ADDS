#include "Tournament.h"
#include "Referee.h"
#include <array>

Player* Tournament::run(std::array<Player *, 8> competitors)
{
    // Create referee object
    Referee ref = Referee();

    // Match Players against each other for Round 1
    int homeScore = 0;
    int awayScore = 0;
    for (int i = 0; i < 5; i++)
    {
    char temp = ref.refGame(competitors[0],competitors[1]);
    if(temp == 'W')
    {
        homeScore++
    }
    else if(temp == 'L')
    {
        awayScore++;
    }
    }
    


    
}