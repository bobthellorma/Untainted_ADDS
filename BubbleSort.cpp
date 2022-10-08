#include "Sort.h"
#include "BubbleSort.h"
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    // Bubble Sort is O(n^2)
    int length = list.size(); // as expected
    for (int i = 1; i <length; i++)
    {
        int num_swaps = 0;
        for (int j = 1; j < length; j++)
        {
            if (list[j] < list[j-1])
            {
                int temp = list.at(j-1);
                list.at(j-1) = list.at(j);
                list.at(j) = temp;
            }
        }
        if (num_swaps == 0)
        {
            break;
        }
    }
    return list;
}