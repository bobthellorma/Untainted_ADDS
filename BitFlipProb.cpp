#include "Individual.h"
#include "Mutator.h"
#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(double pin)
{
    p = pin;
}

Individual BitFlipProb::mutate(Individual ind)
{
    for (int i = 0; i < ind.getLength(); i++)
    {
        double randval = rand() % 100;
        if(10*p >= randval)
        {
            ind.flipBit(i);
        }
    }
    return ind;
}