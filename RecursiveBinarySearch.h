#ifndef _RECURSIVESEARCH
#define _RECURSIVESEARCH
#include <vector>

class RecursiveBinarySearch
{
    private:
    int searchesp(std::vector<int> list, int val, int start, int end, bool low);

    public:
    bool search(std::vector<int> list, int val);
};

#endif