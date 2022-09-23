#ifndef _BITFLIPPROB_H
#define _BITFLIPPROB_H
#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator
{
    private:
    double p;

    public:
    Individual mutate(Individual ind);
    BitFlipProb(double pin);
};

#endif