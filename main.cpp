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
#include <iostream>

int main()
{
    PaperDoll player1 = PaperDoll();
    std::cout << player1.makeMove() << player1.makeMove() << player1.makeMove();
}

