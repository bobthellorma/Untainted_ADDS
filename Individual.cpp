#include "Individual.h"
#include <iostream>
#include <string>

std::string Individual::getString()
{
    return binaryString;
}

int Individual::getBit(int pos)
{
    int bound = binaryString.size();
    if (pos >= bound || pos < 0)
    {
        return -1;
    }
    if (binaryString.at(pos) == '1')
    {
        return 1;
    }
    return 0;
}

void Individual::flipBit(int pos)
{
    int bound = binaryString.size();
    if (pos >= bound || pos < 0)
    {
        return;
    }
    if(binaryString[pos] == '0')
    {
        binaryString[pos] = '1';
    }
    else
    {
        binaryString[pos] = '0';
    }
    return;
}

int Individual::getMaxOnes()
{
    int best = 0;
    int count = 0;
    int size = binaryString.size();
    for(int i = 0; i < size; i++)
    {
        if (binaryString.at(i) == '1')
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > best)
        {
            best = count;
        }
    }
    return best;
}

int Individual::getLength()
{
    return binaryString.size();
}

Individual::Individual(int len)
{
    for (int i = 0; i < len; i++)
    {
        binaryString.append(0);
    }
}

Individual::Individual(std::string dna)
{
    binaryString = dna;
}

void Individual::setString(std::string in)
{
    binaryString = in;
    return;
}
