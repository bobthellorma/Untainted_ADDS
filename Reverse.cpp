#include <iostream>

void reverseDigit(int n)
{
   // base condition to end recursive calls
   if (n < 10) {
      std::cout<<n;
      return;
   }

   else{
      std::cout << n % 10;
      reverseDigit(n/10);
   }
}