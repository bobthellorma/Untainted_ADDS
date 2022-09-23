#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include <string>
#include <iostream>

Individual Rearrange::mutate(Individual ind, int k)
{
    int len = ind.getLength();
    int second = k%len;
    int first = len - second;
    std::string output;

    for (int i = first; i < len; i++)
    {
        std::cout << ind.getBit(i);
        output.append(std::to_string(ind.getBit(i)));
    }

    for (int i = 0; i < first; i++)
    {
        output.append(std::to_string(ind.getBit(i)));
    }
    
    ind.setString(output);

    std::cout << "Output: " << output << std::endl;
    return ind;
}