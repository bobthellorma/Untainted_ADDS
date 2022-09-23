#ifndef _INDIVIDUAL_H
#define _INDIVIDUAL_H
#include <string>


class Individual
{
    private:
    std::string binaryString;

    public:
    std::string getString();
    void setString(std::string in);
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
    Individual(int len);
    Individual(std::string dna);
};

#endif