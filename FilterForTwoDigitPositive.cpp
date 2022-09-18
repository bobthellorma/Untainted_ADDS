#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int val)
{
    if(val >= 10 && val <= 99)
    {
        return true;
    }
    return false;
}