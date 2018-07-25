#include <iostream>
#include <stdlib.h>
using namespace std;

void imprimir(int A[], int n){
  int j = 0;
  int S[100];
  for(int i = 0; i < n; i++){
    if(A[j] == A[i]){
      S[j] = A[j];
      j++;
    }
  }
  cout << "Numero que se repite " << endl;
  for(int i = 0; i < n; i++){
    cout << S[i] << endl;
  }
}//end-accion

int main(){
  int n = 100;
  int A[1000];
  for(int i = 0; i < n;i++){
    A[i] = rand() % 100;
  }
  imprimir(A, n);
}
