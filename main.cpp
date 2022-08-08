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

    std::cout << ref.refGame(Player1,Player2);
}