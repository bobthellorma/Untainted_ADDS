#include <iostream>

int recursive_function(int a, int b)
{

    // Base Case
    if (b == a-1)
    {
        return 1;
    }

    // Call Recursively
    return a - b + recursive_function(a,b+1);
}

int main()
{
    std::cout << recursive_function(5,1) << std::endl;
}