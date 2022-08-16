#ifndef _FATHER_H
#define _FATHER_H

class Father
{
    private:
    int randVal;
    friend class Son;

    public:
    int get_val();

};

#endif