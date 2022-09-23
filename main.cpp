#include <iostream>
#include <algorithm>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include "BitFlip.h"
#include "BitFlipProb.h"

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)
{
    *indPtr = mPtr->mutate(*indPtr, k);
    return indPtr;
}

int main()
{
    int k1 = 2; 
    int k2 = 2;
    std::string one = "000000";
    std::string two = "0111";
    Individual a1 = Individual(one);
    Individual a2 = Individual(two);
    BitFlip m1;
    Rearrange m2;

    execute(&a1,&m1,k1); // we have successfully flipped 2nd 
    execute(&a2,&m2,k2);

    // Print out
    std::cout << a1.getString() << std::endl;
    std::cout << a2.getString() << std::endl;

    // Obtain maximums
    int first = a1.getMaxOnes();
    int second = a2.getMaxOnes();
    std::cout << std::max(first,second) << std::endl;
    
}
