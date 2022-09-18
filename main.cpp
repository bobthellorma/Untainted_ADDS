#include <iostream>
#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include <vector>

int main()
{
    std::vector<int> vals = {1,3,5,7,9,-1};
    MapSquare squaremap;
    MapAbsoluteValue absmap;
    MapTriple trimap;
    std::vector<int> out = trimap.map(vals);

    for (int i = 0; i < out.size(); i++)
    {
        std::cout << out.at(i) << std::endl;
    }
}