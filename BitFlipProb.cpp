#include "BitFlipProb.h"
#include "Individual.h"

Individual BitFlipProb::mutate(Individual ind, double p)
{
    // Setup
    int len = ind.getLength(); // obtain length
    std::string str = ind.getString(); // obtain DNA string
    Individual returntype(str);

    // Find value to change
    for (int i = 0; i < len; i++)
    {
        double randval = rand() % 100;
        if(10*p >= randval)
        {
            returntype.flipBit(i);
        }
    }
    return returntype;
}