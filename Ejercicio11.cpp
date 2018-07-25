#include <iostream>
using namespace std;

int main(){
  int n,m,i,j, acum = 0;
  cin >> n;
  cin >> m;
  int Arr[n][m];
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin >> Arr[i][j];
    }
  }
int k = 0;
  for(int i = 1; i <= n; i++){
    acum += Arr[i][m-k];
    cout << Arr[i][m-k];
    k++;
  }
  cout << "Total es: " << acum << endl;

}
