#include <iostream>

void Triangle(int arr[], int count)
{
    // Base Case
    if (count == 0)
    {
        return;
    }

    // Create new array
    int newarr[count-1];

    // Recursive Call
    for (int i = 0; i < count-1; i++)
    {
        newarr[i] = arr[i] + arr[i+1];
        std::cout << newarr[i] << " ";
    }
    std::cout << std::endl;

    return Triangle(newarr,count-1);
}

int main()
{
    int arr[] = {3,-1,-1,1,-1,-1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    Triangle(arr,size);
}