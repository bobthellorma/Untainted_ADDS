#include "Computer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "Human.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Referee.h"
#include "Toolbox.h"
#include "Tournament.h"
#include "Human.cpp"
#include "Player.cpp"
#include <array>
#include <iostream>

int main()
{
    // Create Tournament object
    Tournament tourn = Tournament();

    // Create array of objects 
    PaperDoll* Player1 = new PaperDoll();
    Player1->type_message("Player 1");
    PaperDoll* Player2 = new PaperDoll();
    Player2->type_message("Player 2");
    FistfullODollars* Player3 = new FistfullODollars();
    Player3->type_message("Player 3");
    Crescendo* Player4 = new Crescendo();
    Player4->type_message("Player 4");
    Crescendo* Player5 = new Crescendo();
    Player5->type_message("Player 5");
    Computer* Player6 = new Computer();
    Player6->type_message("Player 6");
    Toolbox* Player7 = new Toolbox();
    Player7->type_message("Player 7");
    PaperDoll* Player8 = new PaperDoll();
    Player8->type_message("Player 8");

    std::array <Player*, 8> competitors = {Player1, Player2, Player3, Player4, Player5, Player6, Player7, Player8};

    // Call run function on tournament object
    //std::cout << tourn.run(competitors);

    
}

