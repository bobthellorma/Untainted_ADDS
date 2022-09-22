#include "BitFlipProb.h"
#include "Individual.h"

Individual BitFlipProb::mutate(Individual ind, double p)
{
    for (int i = 0; i < ind.getLength(); i++)
    {
        double randval = rand() % 100;
        if(10*p >= randval)
        {
            ind.flipBit(ind.binaryString.at(i));
        }
    }
    return ind;
}