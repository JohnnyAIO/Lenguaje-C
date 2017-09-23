#include <stdio.h>

int fibonaci(int i) {

   if(i == 0) {
      return 0;
   }
        
   if(i == 1) {
      return 1;
   }
   printf("Numero de serie en fibonacci es: %d\n", i);
   return fibonaci(i-1) + fibonaci(i-2);
}

int  main() {

   int n;
   printf("Ingrese el numero de serie de Fibonacci\n");
   scanf("%d", &n);
   if (n <= 0){
   	printf("Numero invalido\n");
   }else{
      printf("Fibonacci total es: %d\n", fibonaci(n));
        
   }//end-else
   return 0;
   
}//end-inicio
