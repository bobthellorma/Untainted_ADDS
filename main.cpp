#include <iostream>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include "ReduceMinimum.h"
#include <vector>

int main()
{
    std::vector<int> vals = {2,4,6,8};
    
    ReduceGCD a;
    ReduceMinimum b;
    std::cout << a.reduce(vals) << std::endl;
    std::cout << b.reduce(vals) << std::endl;
}