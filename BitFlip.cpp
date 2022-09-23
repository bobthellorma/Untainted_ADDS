#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include <iostream>

Individual BitFlip::mutate(Individual ind, int k)
{
    int len = ind.getLength(); // get length
    int place = k%len-1; // find place to swap
    if (place == -1)
    {
        place = ind.getLength()-1;
    }
    ind.flipBit(place);
    return ind;
}