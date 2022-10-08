#include "Sort.h"
#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    // Base Case
    if(list.size() <= 1)
    {
        return list;
    }

    // Find Pivot
    int pivot;
    if (list.size() >= 3)
    {
        pivot = list[2];
    }
    else
    {
        pivot = list[0];
    }

    // Evaluate wrt pivot
    std::vector<int> greater;
    std::vector<int> lesser;
    std::vector<int> pivots;
    for (int i = 0; i < list.size(); i++)
    {
        if (list.at(i) < pivot)
        {
            lesser.push_back(list.at(i));
        }
        else if (list.at(i) > pivot)
        {
            greater.push_back(list.at(i));
        }
        else
        {
            pivots.push_back(pivot);
        }
    }

    // Call Recursive
    std::vector<int> less = sort(lesser);
    less.insert(std::end(less), std::begin(pivots), std::end(pivots));
    std::vector<int> great = sort(greater);
    less.insert(std::end(less), std::begin(great), std::end(great));
    return less;
}