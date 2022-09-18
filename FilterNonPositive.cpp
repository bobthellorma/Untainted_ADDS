#include "FilterNonPositive.h"

bool FilterNonPositive::g(int val)
{
    if(val >= 0)
    {
        return true;
    }
    return false;
}