#ifndef _FISTFULLODOLLARS_H
#define _FISTFULLOLDOLLARS_H

class FistfullODollars : public Computer{

    private:
    // create counter
    int counter = 0;
    
    public:
    // Redefine makeMove
    char makeMove();

    // Create movesToMake
    char movesToMake[3] = {'R','P','P'};

};

#endif