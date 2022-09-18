#ifndef _MAPGENERIC_H
#define _MAPGENERIC_H
#include <vector>

class MapGeneric
{
    private:
    virtual int f(int val) = 0;

    public:
    vector<int> mapspec(vector<int> vec,int acc);
    vector<int> map(vector<int> vec);​
}

#endif