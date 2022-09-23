#ifndef _BITFLIP_H
#define _BITFLIP_H
#include "Individual.h"
#include "Mutator.h"

class BitFlip : public Mutator
{
    public:
    Individual mutate(Individual ind, int k);
};

#endif