#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize)
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
    int Branch1 = numTrucks(firstHalf, loadSize);
    int Branch2 = numTrucks(secondHalf, loadSize);
    return Branch1 + Branch2;
}