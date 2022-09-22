#include "Rearrange.h"
#include <string>

Individual Rearrange::mutate(Individual ind, int k)
{
    int len = ind.getLength();
    int second = k%len;
    int first = len - first;
    std::string output;

    for (int i = first; i < len; i++)
    {
        output.append(ind.binaryString.at(i));
    }

    for (int i = 0; i < first; i++)
    {
        output.append(ind.binaryString.at(i));
    }
    
    for (int i = 0; i < len; i++)
    {
        ind.binaryString.at(i) = output.at(i);
    }
    return ind;
}