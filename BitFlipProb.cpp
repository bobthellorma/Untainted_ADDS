#include "Individual.h"
#include "Mutator.h"
#include "BitFlipProb.h"

Individual BitFlipProb::mutate(Individual ind, double p)
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