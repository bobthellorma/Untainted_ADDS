#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
    // Check if number is valid
    if (numCrates < 1 || loadSize < 1 || numCrates > 10000 || loadSize > numCrates-1)
    {
        return -1;
    }
    return subTrucks(numCrates, loadSize);
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

/*


// We've separated out the memoization function from our Fibonacci calculating function to allow it to be reused.
function memoize(fn) {

    // We create the cache which we'll use to store the inputs and calculated results.
    const memoCache = {};

    return function(n) {

        // We can check if we've already performed a calculation using the given input.
        // If we have, we can simply return that result.
        if(memoCache[n]) {
            return memoCache[n];
        }

        // If we don't find the current input in our cache, we'll need to perform the calculation.
        // We also need to make sure we store that input and result for future use.
        const result = fn(n);
        memoCache[n] = result;

        return result;

    }

}

*/