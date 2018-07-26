#include <iostream>

using namespace std;

bool esPrimo(int a); //Boceto de Funciones

int main(){
int n;
bool y;
cout << "Introduce un numero: " ; //Imprimir - Write - Print
cin >> n; // Leer - Read
y = esPrimo(n);
if(y){
cout << "No es primo" << endl;
}else{
cout << n << " Es primo" << endl;
y = false;
int i = n+1;
while(i > 0){
y = esPrimo(i);
if(!y){
cout << "El siguiente numero es : " << i << endl;
break;
}else{
i++;
}//end-else
}//end-while
}//end-else
}//end-main

//Desarrollo de Funciones
bool esPrimo(int a){
bool x;
for(int cont = 2; cont < a; cont++){
if(a%cont == 0){
x = true;
break;
}else{
x = false;
}//end-if
}//end-for
return x;
}//end-bool
