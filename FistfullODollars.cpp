#include "FistfullODollars.h"

char FistfullODollars::makeMove()
{
    if (counter < 3){
    counter ++;
    }
    else{counter = 0;}
    return movesToMake[counter-1];
}