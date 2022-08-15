#ifndef _PLAYER_H
#define _PLAYER_H

class Player
{
    public:
    Player();
    virtual char makeMove();
    virtual void Reset();
    void printOut();
};
#endif