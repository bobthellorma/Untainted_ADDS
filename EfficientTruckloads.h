#ifndef _EFFICIENT_TRUCKLOADS
#define _EFFICIENT_TRUCKLOADS
#include <map>

class EfficientTruckloads
{
    private:
    std::map<int, std::map<int, int>> mem;

    public:
    int numTrucks(int numCrates, int loadSize);
    int subTrucks(int numCrates, int loadSize);
};

#endif