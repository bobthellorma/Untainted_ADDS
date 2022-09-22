#ifndef _MUTATOR_H
#define _MUTATOR_H
#include "Individual.h"

class Mutator
{
    public:
    virtual Individual mutate(Individual ind, int k);
};

#endif