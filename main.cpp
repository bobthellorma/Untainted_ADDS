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
    std::cin >> listval;

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

    for (int i = 0; i < sorted.size(); i++)
    {
    std::cout << " " << sorted.at(i);
    }


}