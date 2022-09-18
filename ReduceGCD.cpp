#include "ReduceGCD.h"
#include "math.h"
#include <algorithm>

int ReduceGCD::binaryOperator(int a, int b)
{
    int largest = std::max(a,b);

    for (int i = largest; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
    return 1;
}