#include "MyClass.h"
#include <cstdio>

int main(){
  MyClass C;
  printf("Introduzca 3 numeros enteros: \n");
  C.read(3);
  printf("La suma es: %d", C.suma());
  return 0;
}
