#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include <iostream>

int main()
{
    // create objects
    Human Player1;
    Computer Player2;
    Referee ref;

    Player1.makeMove();
    char p1move = Player1.getMove();

    Player2.makeMove();
    char p2move = Player2.getMove();

    std::cout << ref.refGame(p2move,p1move);
}