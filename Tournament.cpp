#include "Tournament.h"
#include "Referee.h"
#include <string>
#include <array>
#include <iostream> // for debugging

Player* Tournament::run(std::array<Player *, 8> competitors)
{
        // Create referee object
        Referee ref = Referee();
        Player* Rd1Winners[4];
        Player* Rd2Winners[2];

        // Match Players against each other for Round 1
        for (int j = 0; j < 4; j++)
        {
            int homeScore = 0;
            int awayScore = 0;
            for (int i = 0; i < 5; i++)
            {
                // play game
                char temp = ref.refGame(competitors[2*j],competitors[2*j+1]);

                // if home team wins
                if(temp == 'W')
                {
                    homeScore++;
                }

                // if away team wins
                else if(temp == 'L')
                {
                    awayScore++;
                }
            }

            // Determine who won after 5 games
            if(awayScore > homeScore)
            {
                Rd1Winners[j] = competitors[2*j+1];
            }
            else{
                Rd1Winners[j] = competitors[2*j];
            }
        }


    // Reset all Players to default position
    for (int i = 0; i < 4; i++)
    {
        Rd1Winners[i]->Reset();
        Rd1Winners[i]->printOut();
    }

    // Round 2
    for (int j = 0; j < 2; j++)
    {
        int homeScore = 0;
        int awayScore = 0;
        for (int i = 0; i < 5; i++)
        {
            // play game
            char temp = ref.refGame(Rd1Winners[2*j],Rd1Winners[2*j+1]);

            // if home team wins
            if(temp == 'W')
            {
                homeScore++;
            }

            // if away team wins
            else if(temp == 'L')
            {
                awayScore++;
            }
        }

        // Determine who won after 5 games
        if(awayScore > homeScore)
        {
            Rd2Winners[j] = Rd1Winners[2*j+1];
        }
        else{
            Rd2Winners[j] = Rd1Winners[2*j];
        }
    }
        
    // Reset players at end of Round 2
    for (int i = 0; i < 2; i++)
    {
        Rd2Winners[i]->Reset();
        Rd2Winners[i]->printOut();
    }

    // Play Grand Final
    int homeScore = 0;
    int awayScore = 0;
    for (int i = 0; i < 5; i++)
    {
        // play game
        char temp = ref.refGame(Rd2Winners[0],Rd2Winners[1]);

        // if home team wins
        if(temp == 'W')
        {                
            homeScore++;
        }

        // if away team wins
        else if(temp == 'L')
        {
            awayScore++;
        }
    }

    if(awayScore > homeScore)
    {
        std::cout<<"Winner! ";
        Rd2Winners[1]->printOut();
        return Rd2Winners[1];
    }

    else{
        std::cout<<"Winner! ";
        Rd2Winners[0]->printOut();
        return Rd2Winners[0];
    }

}



    
