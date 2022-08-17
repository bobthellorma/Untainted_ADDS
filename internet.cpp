#include<iostream>
using namespace std;
 
class A
{
    int x;

    public:
             
    A()
    {
        x=10;
    }
    friend class B; // class B can access x from class A 
};
 
class B
{
    public:
        void display(A &t) // display calls in object A
        {
            cout<<endl<<"The value of x="<<t.x;
        }   
};
 
int main()
{
    A _a;
    B _b;
    _b.display(_a); // display calls object A
    return 0;
}