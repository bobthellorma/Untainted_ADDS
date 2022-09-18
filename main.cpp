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
    std::vector<int> trial = {6,-11,53,-16,73,128,105,104,-71,-179,102,12,21,-145,-99,199,-156,-186,43,-189};

    MapTriple triple;
    std::vector<int> out = triple.map(trial);
    MapAbsoluteValue absa;
    out = absa.map(out);

    FilterForTwoDigitPositive f1;
    FilterOdd f2;
    out = f2.filter(out);
    out = f1.filter(out);

    for (int i = 0; i < out.size(); i++)
    {
        std::cout << out.at(i) << std::endl;
    }
    
}