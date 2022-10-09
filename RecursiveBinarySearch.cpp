#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream> // for debugging


int RecursiveBinarySearch::searchesp(std::vector<int> list, int val, int start, int end)
{
    // Base Case
    if (start == end)
    {
        return -1;
    }

    // Compare middle case
    int middle = (start + end)/2 +1;
    int listval = list.at(middle);

    // Call Recursive
    if (listval == val)
    {
        return middle;
    }

    else if(listval > val)
    {
        return searchesp(list,val,start,middle-1);
    }

    else
    {
        return searchesp(list,val,middle,end);
    }
}


bool RecursiveBinarySearch::search(std::vector<int> list, int val)
{
    if (list.size() == 0)
    {
        return false; // return false if list is empty
    }

    if (list.size() == 1)
    {
        if(list.at(0) == val)
        {
            return true;
        }
        return false;
    }

    int ans = searchesp(list,val,0,list.size()-1);
    if (ans == -1)
    {
        return false;
    }
    return true;
}
