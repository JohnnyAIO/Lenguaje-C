#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
    char nombre[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> nombre[i];
            cout << i;
            cout << j;
            if(nombre[i][j] == 'h'){
                cout << nombre[i] << endl;
                cout << i;
                cout << j;
            }//end-if
        }//end-for 
    }//end-for
    
    return 0;
}