#include <iostream> // for debugging

int numDup(int arr[], int start, int size, int element) {
    int dup = 0;

    // Base Case
    if (size == start)
    {
        return dup;
    }

    // Logic
    if (arr[start] == element)
    {
        dup = 1;
    }

    // Call Recursive
    return dup + numDup(arr,start+1,size,element);

}

int main()
{
    int arr[] = {1,4,0,7,8,0,1,9,0};
    std::cout << numDup(arr,3,9,0) << std::endl;
}