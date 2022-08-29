#include "EfficientTruckloads.h"
#include <vector>
#include <map>

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    // Check if number is valid
    if (numCrates < 1 || loadSize < 1 || numCrates > 10000 || loadSize > numCrates-1)
    {
        //return -1; // indicates invalid input
    }
    return subTrucks(numCrates, loadSize); // pass on to sub-function to call recursively
}

int EfficientTruckloads::subTrucks(int numCrates, int loadSize)
{
    if (numCrates <= loadSize)
    {
        return 1;
    } // consider also the return 0 case

    int firstHalf = numCrates/2;
    int secondHalf = numCrates - firstHalf;

    if (mem.find(loadSize) != mem.end())
    {
        if (mem[loadSize].find(numCrates) == mem[loadSize].end())
        {
            mem[loadSize][numCrates] = numTrucks(firstHalf, loadSize), numTrucks(secondHalf, loadSize);
        }
    }

    else
    {
        std::map<int, int> l;
        mem[loadSize] = l;
        mem[loadSize][numCrates] = numTrucks(firstHalf, loadSize), numTrucks(secondHalf, loadSize);
    }
    return mem[loadSize][numCrates];
}
