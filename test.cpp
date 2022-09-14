#include <iostream>
using namespace std;


int main()
{
    int n = 16;
    int j;

    for (int i=1; i<n; i=i*2) {
    j = n;
    while (j > 0) {
        if (i==j) {
                for (int k=0; k<j; k++)
                    cout << "Hello" << endl;
        } else {
                for (int k=0; k<5; k++)
                    cout << "Bye" << endl;
        }
        j = j/2;
    }
}
}
