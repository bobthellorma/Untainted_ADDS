#ifndef _FATHER_H
#define _FATHER_H

class Father
{
    private:
    int randVal;
    friend class Son;

    public:
    void set_val(int newval);

};

#endif