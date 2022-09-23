#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include <string>
#include <iostream>

Individual Rearrange::mutate(Individual ind, int k)
{
    int len = ind.getLength();
    int place = k%len-1;
    if (place == -1)
    {
        place = len-1;
    }
    
    std::string output;

    for (int i = place; i < len; i++)
    {
        output.append(std::to_string(ind.getBit(i)));
    }

    for (int i = 0; i < place; i++)
    {
        output.append(std::to_string(ind.getBit(i)));
    }
    
    ind.setString(output);
    return ind;
}