#ifndef _MAPGENERIC_H
#define _MAPGENERIC_H
#include <vector>

class MapGeneric
{
    private:
    virtual int f(int val) = 0;

    public:
    std::vector<int> map(std::vector<int> vec)
    std::vector<int> mapspec(std::vector<int> vec, int acc)​
};

#endif