#include <vector>
#include <iostream>

std::vector <int> map(std::vector<int> input)
{
    // Base Case
    if (input.size() == 1)
    {
        input.at(0) = 3*input.at(0); // only does operation on base case
        return input;
    }

    // Call Recursively
    int newLastval = 3*(input.back()); // arbitrary multiply by 3 // .back() returns last value, multiplies last value by 3
    input.pop_back(); // removes last element of input vector, so we can call again

    std::vector <int> newVector = map(input); // updates vector to output
    newVector.push_back(newLastval); // adds last value operated on
    return newVector;
}

int main()
{
    std::vector <int> test = {1,1,2,3,4};
    std::vector <int> output = map(test);

    for (int i = 0; i < output.size(); i++)
    {
        std::cout << output.at(i) << std::endl;
    }
}