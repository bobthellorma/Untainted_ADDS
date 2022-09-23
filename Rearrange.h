#ifndef _REARRANGE_H
#define _REARRANGE_H
#include "Individual.h"
#include "Mutator.h"

class Rearrange : public Mutator
{
    public:
    Individual mutate(Individual ind, int k);
};

#endif