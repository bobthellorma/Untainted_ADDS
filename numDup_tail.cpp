#include <iostream> // for debugging

/*
Implemented using a helper function
*/

int numDupTail(int arr[], int start, int size, int element, int counter)
{
    // Base Case
    if (size <= start)
    {
        return counter;
    }

    // Logic
    if (arr[start] == element)
    {
        counter += 1;
    }

    // Call Recursive
    return numDupTail(arr,start+1,size,element,counter);
}

int numDup(int arr[], int start, int size, int element)
{
    return numDupTail(arr,start,size,element,0);
}


int main()
{
    int arr[] = {-83,4,1,5,-83,6};
    std::cout << numDup(arr,7,6,0) << std::endl;
}

