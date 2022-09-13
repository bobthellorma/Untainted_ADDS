#include <iostream>

int fib(int num, int first = 0, int second = 1)
{
    // Base Case - we reach end
    if(num == 0)
    {
        return first;
    }

    // Call recursively
    int second_next = first;
    int next = first + second;
    num -= 1;
    return fib(num,next,second_next);
    
}

int main()
{
    std::cout << fib(9) << std::endl;
}