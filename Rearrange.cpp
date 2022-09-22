#include "Rearrange.h"
#include <string>
#include <iostream>

Individual Rearrange::mutate(Individual ind, int k)
{
    int len = ind.getLength();
    int second = k%len;
    int first = len - second;
    std::string output;
    std::cout << "Len: " << len << std::endl;
    std::cout << "second: " << second << std::endl;
    std::cout << "first: " << first << std::endl;

    for (int i = first; i < len; i++)
    {
        std::cout << ind.getBit(i);
        output.append(std::to_string(ind.getBit(i)));
    }

    for (int i = 0; i < first; i++)
    {
        output.append(std::to_string(ind.getBit(i)));
    }
    
    for (int i = 0; i < len; i++)
    {
        ind.binaryString.at(i) = output.at(i);
    }
    std::cout << "Output: " << output << std::endl;
    return ind;
}