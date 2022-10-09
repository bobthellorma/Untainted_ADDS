#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>

int main()
{
    BubbleSort a;
    QuickSort b;
    RecursiveBinarySearch c;

    // take in list
    std::vector<int> listval;
    int tempa;
    while (std::cin >> tempa)
    {
        listval.push_back(tempa);
    }
    

    //std::vector<int> listval = {0,3,5,4,-5,100,7777,2014};

    // QuickSort list
    std::vector<int> sorted = b.sort(listval);

    // BinarySearch "1"
    bool exist = c.search(sorted,1);
    if (exist == 0)
    {
        std::cout << "false";
    }
    else
    {
        std::cout << "true";
    }
    

    // std::cout << exist;
    int size1 = sorted.size();

    for (int i = 0; i < size1; i++)
    {
    std::cout << " " << sorted.at(i);
    }
}