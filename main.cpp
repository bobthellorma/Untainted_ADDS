#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include "BitFlip.h"
#include "BitFlipProb.h"

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

    m1.mutate(a1,k1);
    m1.mutate(a2,k1);
    m2.mutate(a1,k2);
    m2.mutate(a2,k2);
    std::cout << a1.getString() << std::endl;
    std::cout << a1.getMaxOnes() << std::endl;
    std::cout << a2.getString() << std::endl;
    std::cout << a2.getMaxOnes() << std::endl;


    
}
