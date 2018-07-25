#include <iostream>
using namespace std;

int main() {
  int n,m;
  cin >> n;
  cin >> m;
  int A[n][m];
  int B[n][m];
  int C[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> A[i][j];
      cin >> B[i][j];
      C[i][j] = A[i][j]*B[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << C[i][j];
    }
    cout << "" << endl;
  }

  return 0;
}
