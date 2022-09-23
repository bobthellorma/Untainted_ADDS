#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include <iostream>

Individual BitFlip::mutate(Individual ind, int k)
{
    int len = ind.getLength(); // get length
    int place = k%len-1; // find place to swap
    std::cout << place << std::endl;
    ind.flipBit(place);
    std::cout << ind.getString() << std::endl; // Bit has successfully flipped here
    // but this doesn't carry over into main...
    return ind;
}