#include <stdio.h>
#include <iostream>
using namespace std;
int factorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int main(int argc,char**argv){
   int i = 15;
   cout << "Factorial of %d us %d\n" << i << factorial(i);
   return 0;
}
