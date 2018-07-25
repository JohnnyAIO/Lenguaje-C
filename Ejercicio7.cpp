#include <iostream>
using namespace std;

int main(){
int n, k, j;
int A[100];
cin >> n;
cin >> k;
for(int i = 0; i < n; i++){
  cin >> A[i];
}//end-for
for(int i = 0; i < n; i++){
  for(j = 0; j < n; j++){
    if(A[i]+A[j] == k){
      cout << A[i]<<"+"<<A[j]<<" = "<< k << endl;
      break;
    }
  }
}



}//end-main
