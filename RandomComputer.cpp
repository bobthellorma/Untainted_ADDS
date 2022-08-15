#include "RandomComputer.h"
#include <stdlib.h>

char RandomComputer::makeMove()
{
    char values[3] = {'R','P','S'};
    int location = rand() % 3;
    return values[location];
}

void RandomComputer::Reset()
{
    // do nothing
}