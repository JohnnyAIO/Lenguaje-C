//archivo MyClass.cpp
#include "MyClass.h"

MyClass::MyClass(){
  TAM = 0;
}
void MyClass::read(int n){

  if(n < MAX){
    TAM = n;
    for(int i = 0; i < TAM; i++){
      scanf("%d", &Arr[i]);
    }//end-para
  }else{
    printf("Solo se puede leer un maximo de %d enteros", MAX);
  }//end-if
}//end-function

int MyClass::suma(){
  if(TAM > 0){
    int total = 0;
    for(int i = 0; i < TAM; i++){
      total += Arr[i];
    }//end-para
    return total;
  }else{
    printf("El arreglo esta vacio");
    return -1;
  }//end-if
}//end-function
