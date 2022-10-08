#ifndef _QUICKSORT_H
#define _QUICKSORT_H
#include "Sort.h"

class QuickSort : public Sort
{
    public:
    std::vector<int> sort(std::vector<int> list);
};

#endif