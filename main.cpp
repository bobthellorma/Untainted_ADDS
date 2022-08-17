#include <iostream>
#include "Father.h"
#include "Son.h"

int main()
{
    Father dad;
    Son kid;

    dad.set_val(15);
    std::cout << kid.get_val(dad) << std::endl;
}