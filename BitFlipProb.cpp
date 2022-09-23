#include "Individual.h"
#include "Mutator.h"
#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(double p)
{
    if (p <= 1 and p >= 0)
    {
    pin = p;
    }
    else{pin = 0;}
}

Individual BitFlipProb::mutate(Individual ind, int k)
{
    for (int i = 0; i < ind.getLength(); i++)
    {
        double randval = rand() % 100;
        if(10*pin >= randval)
        {
            ind.flipBit(i);
        }
    }
    return ind;
}