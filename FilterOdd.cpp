#include "FilterOdd.h"

bool FilterOdd::g(int val)
{
    if(val%2 == 0)
    {
        return true;
    }
    return false;
}