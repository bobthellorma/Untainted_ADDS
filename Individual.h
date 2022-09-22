#ifndef _INDIVIDUAL_H
#define _INDIVIDUAL_H
#include <string>
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

class Individual
{
    friend class BitFlip;
    friend class BitFlipProb;
    friend class Rearrange;

    private:
    std::string binaryString;

    public:
    std::string get_string();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    Individual(int len);
    Individual(std::string dna);
};

#endif