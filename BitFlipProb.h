#ifndef _BITFLIPPROB_H
#define _BITFLIPPROB_H
#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator
{
    private:
    double pin;

    public:
    Individual mutate(Individual ind, int k);
    BitFlipProb(double p);
};

#endif