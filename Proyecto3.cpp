#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;


class SOPA{
    public:
    char Sopa[100][100];
    char Palabra[100];
    int n,m,p;
};
SOPA s;
int main(){
    int i,j;
    FILE *p1, *p2;
    p1 = fopen("ocurrencias.txt", "w");
    p2 = fopen("sin_ocurrencias.txt", "w");
    SOPA s;
    cin >> s.n >> s.m;
    cin >> s.p;
    for(i = 0; i < s.n; i++){
        for(j = 0; j < s.m; j++){
            cin >> s.Sopa[i][j];
        }//end-para
    }//end-para
//*****Correcto********
        for(j = 0; j < s.p; j++){
           cin >> s.Palabra[j];
           cout << s.Palabra[j];
           cout << "i "<< i << endl;
           cout << "j" <<j << endl; 
        }//end-para
//****Correcto*******
        for(j = 0; j < s.p; j++){
           cout << s.Palabra[j] <<endl; 
        }
    char resultado[100];
//Asignacion 1 - 2 - 3

    j = 0;
    i = 0;
while(i < s.p){
    cout << "i "<< i << endl;
    cout << "j" <<j << endl;
    resultado[i] = s.Palabra[i];       
    if(s.Palabra[i] != 'A' && s.Palabra[i] != 'E' && s.Palabra[i] != 'I' &&
        s.Palabra[i] != 'O' && s.Palabra[i] != 'U' && s.Palabra[i] != 'H' &&
        s.Palabra[i] != 'W' && s.Palabra[i] != 'H'){

            if(s.Palabra[i] == 'F' || s.Palabra[i] == 'V' || s.Palabra[i] == 'B' || s.Palabra[i] == 'P'){
                resultado[i+1] = '1';
                i++;
            }//end-primera-parte

            if(s.Palabra[i] == 'C' || s.Palabra[i] == 'G' || s.Palabra[i] == 'K' || 
            s.Palabra[i] == 'S' || s.Palabra[i] == 'X' || s.Palabra[i] == 'Z'){
                resultado[i+1] = '2';
                i++;
            }//end-segunda-parte

            if(s.Palabra[i] == 'D' || s.Palabra[i] == 'T'){
                resultado[i+1] = '3';
                i++;
            }//end-tercera-parte

            if(s.Palabra[i] == 'L'){
                resultado[i+1] = '4';
                i++;
            }//end-cuarta-parte

            if(s.Palabra[i] == 'M' || s.Palabra[i] == 'N'){
                resultado[i+1] = '5';
                i++;
            }//end-quinta-parte

            if(s.Palabra[i] == 'R'){
                resultado[i+1] = '6';
                i++;
            }//end-sexta-parte

            if(s.Palabra[i] == 'Q' || s.Palabra[i] == 'J'){
                resultado[i+1] = '7';
                i++;
            }//end-septima-parte
            j++;
    }//end-validar-letras-primera-parte
}//end-para
//Fin-asignacion


for(i = 0; i < s.n; i++){
    cout  << resultado[i] << endl;
}//end-para

fclose(p1);
fclose(p2);
return 0;
}//end-main