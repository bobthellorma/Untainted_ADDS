#ifndef _BITFLIP_H
#define _BITFLIP_H
#include "Mutator.h"

class BitFlip : public Mutator
{
    public:
    Individual mutate(Individual ind, int k);
};

#endif