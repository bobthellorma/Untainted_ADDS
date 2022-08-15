#ifndef _BUREAUCRAT_H
#define _BUREAUCRAT_H
#include "Computer.h"

class Bureaucrat : public Computer{

    // Redefine makeMove
    char makeMove();
    void Reset();

};

#endif