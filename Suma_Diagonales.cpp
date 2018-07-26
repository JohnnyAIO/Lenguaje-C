#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

/*
 * Complete the diagonalDifference function below.
 */
int diagonalDifference(vector<vector<int>> a, int n) {
    int total = 0, j, i;
    int L = 0, R = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                L += a[i][j];
            }
            if(i+j == (n-1)){
                R += a[i][j];
            }
        }//end-for
    }//end-for
    total = abs(L - R);
    return total;
}//end-funcion

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> a(n);
    for (int a_row_itr = 0; a_row_itr < n; a_row_itr++) {
        a[a_row_itr].resize(n);

        for (int a_column_itr = 0; a_column_itr < n; a_column_itr++) {
            cin >> a[a_row_itr][a_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(a, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
