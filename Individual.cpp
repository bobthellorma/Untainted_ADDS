#include "Individual.h"

std::string Individual::get_string()
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
    return binaryString[pos];
}

void Individual::flipBit(int pos)
{
    int bound = binaryString.size();
    if (pos >= bound || pos < 0)
    {
        return;
    }
    if(binaryString[pos] == 0)
    {
        binaryString[pos] = 1;
    }
    else
    {
        binaryString[pos] = 0;
    }
    return;
}

int Individual::getMaxOnes()
{
    int best = 0;
    int count = 0;
    for(int i = 0; i < binaryString.size(); i++)
    {
        if (binaryString.at(i) == 1)
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
    binaryString = {0};

    for (int i = 0; i < len-1; i++)
    {
        binaryString.append(0);
    }
}

Individual::Individual(std::string dna)
{
    binaryString = dna;
}
