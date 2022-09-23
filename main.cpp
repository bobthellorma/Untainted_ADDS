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
    std::string one = "01111";
    int k1 = 3;
    std::string two = "110000";
    int k2 = 4;

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
    std::cout << a2.getMaxOnes() << std::endl;
    
}
