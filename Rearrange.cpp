#include "Mutator.h"
#include "Rearrange.h"
#include "Individual.h"
#include <string>
#include <iostream>

Individual Rearrange::mutate(Individual ind, int k)
{
    // Setup
    std::string str = ind.getString(); // obtain DNA string
    int len = ind.getLength();

    // Find value to change
    int second = k%len;
    int first = len - second;
    std::string output;

    for (int i = first; i < len; i++)
    {
        output.append(std::to_string(ind.getBit(i)));
    }

    for (int i = 0; i < first; i++)
    {
        output.append(std::to_string(ind.getBit(i)));
    }

    Individual returntype(output);
    return returntype;
}