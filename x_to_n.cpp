#include <iostream>

/*
Using Head Recursion
*/

int power (int x, int n)
{

// base case
if (n == 1)
{
    return x;
}

// call recursive
return power(x,n-1)*x;
}

int fracsum(int i, int accumulator, int limit)
{

    accumulator += i/(i+1);
    std::cout << accumulator << std::endl;
    i += 1;
    return (i, accumulator, limit);

    if (limit >= 1)
    {
        return accumulator;
    }
}

int frachelper(int i)
{
    return fracsum(0,0,i);
}

int main()
{
    std::cout << frachelper(6) << std::endl;
}