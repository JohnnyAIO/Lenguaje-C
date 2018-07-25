#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n, x, y;
  cin >> n;
  int A[100];
  for(int i =0; i <n;i++){
    A[i] = pow(2,i);
    cout << A[i] << endl;
  }

}
