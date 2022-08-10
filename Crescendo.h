#ifndef _CRESCENDO_H
#define _CRESCENDO_H

class Crescendo : public Computer{

    private:
    // create counter
    int counter = 0;
    
    public:
    // Redefine makeMove
    char makeMove();

    // Create movesToMake
    char movesToMake[3] = {'P','S','R'};


};

#endif