#include "MapGeneric.h"
#include <vector>

std::vector<int> MapGeneric::mapspec(std::vector<int> vec, int acc)
{
    // Base Case
    if (acc >= vec.size())
    {
        return vec;
    }

    // Logic
    vec.at(acc) = f(vec.at(acc));

    // Call Recursive
    return mapspec(vec, acc+1);
}

std::vector<int> MapGeneric::map(std::vector<int> vec)
{
    return mapspec(vec,0);
}
