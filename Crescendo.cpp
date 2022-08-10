#include "Crescendo.h"

char Crescendo::makeMove()
{
    if (counter < 3){
    counter ++;
    }
    else{counter = 0;}
    return movesToMake[counter-1];
}

void Crescendo::Reset()
{
    counter = 0;
}