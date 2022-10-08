#include <iostream>

int main()
{
    int a = 0;
    int* aptr = &a;
    int b = 1;
    int* bptr = &b;
    int c = 3;
    int* cptr = &c;
    int d = 7;
    int* dptr = &d;
    
    for (int i = 0; i < 4; i++)
    {
        std::cout << *(aptr+i) << std::endl;
    }
}