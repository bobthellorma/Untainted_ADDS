#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector <int> in)
{
    // Base Case
    if (in.size() == 1)
    {
        return in.at(0);
    }

    // Logic
    int out = binaryOperator(in.at(in.size()-1), in.at(in.size()-2));
    in.at(in.size()-2) = out;
    in.erase(in.begin()+in.size()-1);

    // Call Recursive
    return reduce(in);    
}