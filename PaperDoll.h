#ifndef _PAPERDOLL_H
#define _PAPERDOLL_H
#include "Computer.h"

class PaperDoll : public Computer{

    private:
    // create counter
    int counter = 0;
    
    public:
    // Redefine makeMove
    char makeMove();

    // Create movesToMake
    char movesToMake[3] = {'P','S','S'};

};

#endif