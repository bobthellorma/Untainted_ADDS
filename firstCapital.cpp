#include <iostream>
#include <string>

char firstCapital(std::string name)
{
    // Base Case
    if (name[0] > 64 && name[0] < 90)
    {
        return name[0];
    }

    // Call Recursive
    return firstCapital(name.erase(0,1));
}

int main()
{
    std::cout << firstCapital("lIttle BoX i sAiD") << std::endl;
    /*std::string name = "Alex";

    for (int i = 0; i < name.length(); i++)
    {
        if(name[i] > 64 && name[i] < 90)
        {
            std::cout << name[i];
        }
    }
    std::cout << std::endl;
    */
}