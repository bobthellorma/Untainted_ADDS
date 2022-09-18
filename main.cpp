#include <iostream>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include <vector>

int main()
{
    std::vector<int> vals = {0,4,-3,11,8,19};
    FilterForTwoDigitPositive a;
    FilterNonPositive b;
    FilterOdd c;

    std::vector<int> out = c.filter(vals);

    for (int i = 0; i < out.size(); i++)
    {
        std::cout << out.at(i) << std::endl;
    }
}