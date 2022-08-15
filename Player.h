#ifndef _PLAYER_H
#define _PLAYER_H
#include <string>

class Player
{
    private:
    std::string message;

    public:
    void type_message(std::string mes);
    Player();
    virtual char makeMove();
    virtual void Reset();
    void printOut();
};
#endif