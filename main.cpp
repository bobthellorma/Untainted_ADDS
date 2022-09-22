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
    std::vector<int> trial = {-5,-24,-123,-81,200,157,84,67,-83,-60,-72,192,-25,-20,-50,-181,-70,-15,-108,-123};

    MapTriple triple;
    std::vector<int> out = triple.map(trial);
    MapAbsoluteValue absa;
    out = absa.map(out);

    FilterForTwoDigitPositive f1;
    FilterOdd f2;
    out = f2.filter(out);
    out = f1.filter(out);

    ReduceGCD red1;
    ReduceMinimum red2;

    std::cout << red1.reduce(out) << std::endl;
    
}