#ifndef _INDIVIDUAL_H
#define _INDIVIDUAL_H
#include <string>

class Individual
{
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

    friend class BitFlip;
    friend class BitFlipProb;
    friend class Rearrange;
};

#endif