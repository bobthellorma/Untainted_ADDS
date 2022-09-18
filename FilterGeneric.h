#ifndef _FILTERGENERIC_H
#define _FILTERGENERIC_H
#include <vector>

class FilterGeneric
{
    private:
    virtual bool g(int val) = 0;

    public:
    std::vector<int> filterhelp(std::vector <int> in, int i);
    std::vector<int> filter(std::vector <int> in);
};

#endif