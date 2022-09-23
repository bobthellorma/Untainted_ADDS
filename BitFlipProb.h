#ifndef _BITFLIPPROB_H
#define _BITFLIPPROB_H
#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator
{
    public:
    Individual mutate(Individual ind, double p);
};

#endif