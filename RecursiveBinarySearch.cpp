#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream> // for debugging

int RecursiveBinarySearch::searchesp(std::vector<int> list, int val, int start, int end, bool low)
{
    // Base Case
    if (start == end)
    {
        return -1;
    }

    // Compare middle case
    int middle = (start + end)/2;
    if (low == true)
    {
        middle += 1;
    }
    int listval = list.at(middle);
    
    // Call Recursive
    if (listval == val)
    {
        return middle;
    }
    else if(listval > val)
    {
        return searchesp(list,val,start,middle-1,true);
    }
    else{
        return searchesp(list,val,middle+1,end,false);
    }
}

bool RecursiveBinarySearch::search(std::vector<int> list, int val)
{
    int ans = searchesp(list,val,0,list.size()-1,false);
    if (ans == -1)
    {
        return false;
    }
    return true;
}