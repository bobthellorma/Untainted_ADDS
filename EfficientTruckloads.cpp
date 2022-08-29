#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    // Check if number is valid
    if (numCrates < 1 || loadSize < 1 || numCrates > 10000 || loadSize > numCrates-1)
    {
        return -1; // indicates invalid input
    }
    return subTrucks(numCrates, loadSize); // pass on to sub-function to call recursively
}


int EfficientTruckloads::subTrucks(int numCrates, int loadSize)
{
    // Base Case
    if (numCrates <= loadSize)
    {
        return 1;
    }

    // Data for next
    int firstHalf = numCrates/2;
    int secondHalf = numCrates - firstHalf;

    // Debugging
    //std::cout << "Calling numTrucks(" << firstHalf << ","<< loadSize << ")";
    //std::cout << "and numTrucks(" << secondHalf << "," <<loadSize << ")" << std::endl;

    // Call Recursively
    int Branch1 = subTrucks(firstHalf, loadSize);
    int Branch2 = subTrucks(secondHalf, loadSize);
    return Branch1 + Branch2;
}
