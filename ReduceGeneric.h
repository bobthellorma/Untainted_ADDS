#ifndef _REDUCE_GENERIC
#define _REDUCE_GENERIC
#include <vector>

class ReduceGeneric
{
    private:
    virtual int binaryOperator(int a, int b) = 0;

    public:
    int reduce(std::vector<int> in);
};

#endif