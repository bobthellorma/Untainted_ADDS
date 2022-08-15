#ifndef _CRESCENDO_H
#define _CRESCENDO_H
#include "Computer.h"

class Crescendo : public Computer{

    private:
    // create counter
    int counter = 0;
    
    public:
    // Redefine makeMove
    char makeMove();

    // Reset
    void Reset();

    // Create movesToMake
    char movesToMake[3] = {'P','S','R'};


};

#endif