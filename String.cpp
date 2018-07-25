#include <iostream>
using namespace std;

int main(){
   char mensaje[100][100];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 20; j++){
            cin >> mensaje[i][j];
        }//end-for
        //Cada espacio toma un salto de linea, 0 -> 1 -> 2
    }//end-para
    j = 0;
    i = 0;
    while(i < 3){
        if(mensaje[i][j] =='o'){
            cout << mensaje[i][j] << endl;
            i++;
        }else{
            j++;
        }//end-if
        //Cada espacio toma un salto de linea, 0 -> 1 -> 2
    }//end-para
    


    return 0;
}//end-main