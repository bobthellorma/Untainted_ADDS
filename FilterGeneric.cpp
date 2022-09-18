#include "FilterGeneric.h"

std::vector<int> FilterGeneric::filterhelp(std::vector <int> in, int i)
{
    // Base Case
    if (i >= in.size())
    {
        return in;
    }

    // Logic
    if (g(in.at(i)) == 1)
    {
        i++;
    }
    else
    {
        in.erase(in.begin()+i);
    }

    // Call Recursively
    return filterhelp(in, i);

}

std::vector<int> FilterGeneric::filter(std::vector<int> in)
{
    return filterhelp(in,0);
}
