#include <iostream>
#include <cctype>
using namespace std;

int cantidadPalabras = 0;

bool esAlfaNumerico(char c[]);
void encontrarPalabra(char actual[]);
bool finEntrada(char c[]);
void procesarPalabra(char actual[]);

int main(){
char actual[100];
cout << "Ingrese una cadena de caracteres " << endl;
cin.getline(actual, 100); //Leer la cadena completa
while(true){
encontrarPalabra(actual);
if(finEntrada(actual)) break;
procesarPalabra(actual);
}//end-while
cout << "Cantidad total de palabras: " << cantidadPalabras << endl;
return 0;
}//end-main

bool esAlfaNumerico(char c[]){
int i;
bool x = false;
for(i = 0; c[i]; i++){
if(c[i] == '0' || c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4'
|| c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9'){
x = true;
}//end-if
if(c[i] == toupper(c[i])){
x = true;
}//end-if
if(c[i] == tolower(c[i])){
x = true;
}//end-if
}//end-para
return x;
}//end-bool

void encontrarPalabra(char actual[]){
int i = 0;
while(!esAlfaNumerico(actual)){
if(finEntrada(actual)){
break;
}else{
i++;
}
}//end-while


}//end-encontrar-

bool finEntrada(char c[]){
for(int i = 0; c[i]; i++){
if(c[i] == '*'){
return true;
}//end-if
}//end-para
}//end-entrada

void procesarPalabra(char actual[]){
for(int i = 0; actual[i]; i++){
if(esAlfaNumerico(actual)){
cantidadPalabras++;
}//end-if
if(finEntrada(actual)){
break;
}//end-if
}//end-para

}//end-main
