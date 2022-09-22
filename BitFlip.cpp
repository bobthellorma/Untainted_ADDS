#include "BitFlip.h"
#include <iostream>

Individual BitFlip::mutate(Individual ind, int k)
{
    // Setup
    int len = ind.getLength(); // obtain length
    std::string str = ind.getString(); // obtain DNA string
    Individual returntype(str);

    // Find value to change
    int place = k%len-1;
    returntype.flipBit(place);
    std::cout << returntype.getString() << std::endl;
    return returntype;
}