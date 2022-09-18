#include "FilterOdd.h"

bool FilterOdd::g(int val)
{
    if(val%2 == 1)
    {
        return true;
    }
    return false;
}