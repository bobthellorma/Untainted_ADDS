#include "MapGeneric.h"
#include <vector>

vector<int> MapGeneric::mapspec(vector<int> vec, int acc)
{
    // Base Case
    if (acc >= vec.size())
    {
        return vec;
    }

    // Logic
    vec.at(i) = f(vec.at(i));

    // Call Recursive
    return mapspec(vec, acc+1);
}

vector<int> MapGeneric::map(vector<int> vec)​
{
    return mapspec(vec,0);
}