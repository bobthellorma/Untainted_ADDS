#ifndef _FISTFULLODOLLARS_H
#define _FISTFULLOLDOLLARS_H
#include "Computer.h"

class FistfullODollars : public Computer{

    private:
    // create counter
    int counter = 0;
    
    public:
    // Redefine makeMove
    char makeMove();

    void Reset();

    // Create movesToMake
    char movesToMake[3] = {'R','P','P'};

};

#endif