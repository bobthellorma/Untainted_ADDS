#ifndef _BITFLIPPROB_H
#define _BITFLIPPROB_H
#include "Mutator.h"
#include "Individual.h"

class BitFlipProb : public Mutator
{
    public:
    Individual mutate(Individual ind, double p);
};

#endif