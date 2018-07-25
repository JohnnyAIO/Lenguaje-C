#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string.h>
using namespace std;


class SOPA{
    public:
    char Sopa[100][100];
    char Palabra[100][100];
    int n,m,p;
};
SOPA s;
int main(){
    int i,j;
    ofstream p1, p2;
    p1.open("ocurrencias.txt");
    p2.open("sin_ocurrencias.txt");
    SOPA s;
    cin >> s.n >> s.m;
    cin >> s.p;
    //Lectura de la Sopa de Letras
    for(i = 0; i < s.n; i++){
        for(j = 0; j < s.m; j++){
            cin >> s.Sopa[i][j];
        }//end-para
    }//end-para
    //Lectura de las palabras
    for(j = 0; j < s.p; j++){
           cin >> s.Palabra[j]; 
    }//end-para
    //Asignacion 1-2-3
    char fonetica[100][100];
    for(i = 0; i < s.p; i++){
        for(j = 0; j < s.p; j++){
            fonetica[0][0] = s.Palabra[i][j];
            
        if(s.Palabra[i][j] != 'A' && s.Palabra[i][j] != 'E' && s.Palabra[i][j] != 'I' &&
        s.Palabra[i][j] != 'O' && s.Palabra[i][j] != 'U' && s.Palabra[i][j] != 'H' &&
        s.Palabra[i][j] != 'W' && s.Palabra[i][j] != 'H'){

            if(s.Palabra[i][j] == 'F' || s.Palabra[i][j] == 'V' || s.Palabra[i][j] == 'B' || s.Palabra[i][j] == 'P'){
                fonetica[i][j] = '2';
            }//end-primera-parte

            if(s.Palabra[i][j] == 'C' || s.Palabra[i][j] == 'G' || s.Palabra[i][j] == 'K' || 
            s.Palabra[i][j] == 'S' || s.Palabra[i][j] == 'X' || s.Palabra[i][j] == 'Z'){
                fonetica[i][j] = '2';
                
            }//end-segunda-parte

            if(s.Palabra[i][j] == 'D' || s.Palabra[i][j] == 'T'){
                fonetica[i][j] = '3';
                
            }//end-tercera-parte

            if(s.Palabra[i][j] == 'L'){
                fonetica[i][j] = '4';
                
            }//end-cuarta-parte

            if(s.Palabra[i][j] == 'M' || s.Palabra[i][j] == 'N'){
                fonetica[i][j] = '5';
                
            }//end-quinta-parte

            if(s.Palabra[i][j] == 'R'){
                fonetica[i][j] = '6';
                
            }//end-sexta-parte

            if(s.Palabra[i][j] == 'Q' || s.Palabra[i][j] == 'J'){
                fonetica[i][j] = '7';
            }//end-septima-parte
        }//end-else
        }//end-para
    }//end-para


    for(i = 0; i < s.n; i++){
        for(j = 0; j < s.m; j++){
            if(strcmp(s.Sopa[j], s.Palabra[j])){
                p1 << fonetica[i][j] << endl;
                p1 << s.Palabra[i][j] << endl;
                p1 << "(" << i << j << ")" << endl;
                 //Escribir en el archivo con ocurrencias
            }else{
                p2 << fonetica[i][j] << endl;
                p2 << s.Palabra[i][j] << endl;  //Escribir en el archivo sin ocurrencias
            }//end-if
        }//end-for      
    }//end-para
    
    //Jonathan Torres C.I 25.211.873
    //Nestor Velastegui 28.141.078
            

p1.close();
p2.close();
return 0;
}//end-main