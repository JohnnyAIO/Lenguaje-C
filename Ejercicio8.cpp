#include <iostream>
using namespace std;

int main(){
  int n, i, j, k;
  cin >> n;
  int A[100];
  int B[100];
  int C[100];
  for(i = 0; i < n; i++){
    cin >> A[i];
    cin >> B[i];
  }//end-para
  i = 0;
  j = 0;
  k = 0;
  while(i < n && j < n){
    if(A[i] < B[j]){
      C[k] = A[i];
      i++;
    }else{
      C[k] = B[j];
      j++;
    }//end-if
    k++;
  }//end-while
  cout << "Arreglo en total: " << endl;
  for(i = 0; i < k; i++){
    cout << C[i] << endl;
  }
}//end-main
