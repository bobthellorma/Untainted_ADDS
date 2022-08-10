#include "PaperDoll.h"

char PaperDoll::makeMove()
{
    if (counter < 2){
    counter ++;
    }
    else{counter = 0}
    return movesToMake[counter-1];
}
