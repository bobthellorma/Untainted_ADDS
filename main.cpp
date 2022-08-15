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
    PaperDoll* Player2 = new PaperDoll();
    FistfullODollars* Player3 = new FistfullODollars();
    Crescendo* Player4 = new Crescendo();
    Crescendo* Player5 = new Crescendo();
    Computer* Player6 = new Computer();
    Toolbox* Player7 = new Toolbox();
    PaperDoll* Player8 = new PaperDoll();

    std::array <Player*, 8> competitors = {Player1, Player2, Player3, Player4, Player5, Player6, Player7, Player8};

    // Call run function on tournament object
    std::cout << tourn.run(competitors);
}

