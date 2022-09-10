#include <iostream>
std::string starting_place = "N";
std::string letters[7] = {"N","E","S","W","N","E","S"};
std::string cards = "7534K66K72QK953769t859QK8A4J54Q7AQt42A23At8JJ29t83J6";
int points[4];

int main()
{
// For loop
for (int i = 0; i < 52; i++)
{
    if(cards[i] == 'A')
    {
        points[i%4] += 4;
    }

    else if(cards[i] == 'K') 
    {
        points[i%4] += 3;
    }

    else if (cards[i] == 'Q')
    {
        points[i%4] += 2;
    }

    else if (cards[i] == 'J')
    {
        points[i%4] += 1;
    }
}

for(int i = 0; i < 4; i++)
{
    if (letters[i] == starting_place)
    {
        std::cout << letters[i];
        std::cout << points[3];
        std::cout << letters[i+1];
        std::cout << points[0];
        std::cout << letters[i+2];
        std::cout << points[1];
        std::cout << letters[i+3];
        std::cout << points[2];
    }
}
}