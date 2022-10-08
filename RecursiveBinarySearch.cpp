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
    int middle = (start + end)/2;
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
    else{
        return searchesp(list,val,middle+1,end);
    }
}

bool RecursiveBinarySearch::search(std::vector<int> list, int val)
{
    int ans = searchesp(list,val,0,list.size()-1);
    if (ans == -1)
    {
        return false;
    }
    return true;
}