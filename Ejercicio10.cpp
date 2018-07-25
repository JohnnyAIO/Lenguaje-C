#include <iostream>
using namespace std;

int main(){
  int n = 2;
  int A[2][2] = {
                 {1,5},
                 {2,3},
                 };
  int B[10][10];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      B[j][i] = A[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << B[i][j];
    }
    cout << "" << endl;
  }

}
