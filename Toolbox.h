#ifndef _TOOLBOX_H
#define _TOOLBOX_H
#include "Computer.h"

class Toolbox : public Computer{

    // Redefine makeMove
    char makeMove();
    void Reset();

};

#endif