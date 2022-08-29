#include <string>
#include <math.h>
#include "Reverse.h"

int Reverse::reverseDigit(int value)
{
    if (value < 0)
    {
        return -1;
    }
    // Find the number of digits
    int digit = (int) log10(value);
 
    // Base case
    if(value == 0)
        return 0;
    
    // Find values for next step
    int new_val = value % 10;
    int rem = value/10;

    // Call recursively
    return ((new_val * pow(10, digit)) + reverseDigit(rem));
}

std::string Reverse::reverseString(std::string letters)
{
    // Invalid input
    if (letters == "")
    {
        return "ERROR";
    }
    
    // Base case - only one letter left
    std::string letter;
    if (letters.length() == 1)
    {
        letter.push_back(letters[0]);
        return letter;
    }

    // Recursive call
    std::string first_letter;
    first_letter.push_back(letters[0]);
    letters.erase(0,1);
    return reverseString(letters) + first_letter;
}