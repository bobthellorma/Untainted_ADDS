#ifndef _SORT_H
#define _SORT_H
#include <vector>

class Sort
{
    private:
    std::vector<int> current;
    
    public:
    std::vector<int> virtual sort(std::vector<int> list) = 0;

};

#endif