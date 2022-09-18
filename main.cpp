#include <iostream>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include <vector>

int main()
{
    vector<int> vals = {1,3,5,7,9};
    MapSquare squaremap;
    vector<int> out = squaremap map(vals);

    for (int i = 0; i < vals.length(); i++)
    {
        std::cout << out.at(i) << std::endl;
    }
}