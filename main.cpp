#include <iostream>
#include "Father.h"
#include "Son.h"

int main()
{
    Father dad;
    Son kid;

    std::cout << dad.get_val() << std::endl;
    kid.set_val(22);
    std::cout << dad.get_val() << std::endl;

}