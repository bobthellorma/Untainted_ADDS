#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int val)
{
    if(val >= 10)
    {
        return true;
    }
    return false;
}