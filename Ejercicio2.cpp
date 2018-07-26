#include <iostream>
#include <cctype>
using namespace std;

int cantidadPalabras = 0;

bool finEntrada(char c[]){
for(int i = 0; c[i];i++){
	if(c[i] == '*'){
		break;
	}//end-else
}//end-for
return true;
}//end-entrada

bool esAlfaNumerico(char c[]){
	for(int i = 0;c[i];i++){
		if(c[i] == toupper(c[i])){
			//cout << "Es mayuscula" << endl;
			cantidadPalabras++;
		}else if (c[i] == tolower(c[i])){
			//cout << "Es minuscula" << endl;
		}else if(c[i] == ' '){
			cantidadPalabras++;
		}else if(finEntrada(c)){
			break;
		}else{
			cout << "No tiene nada" << endl;
			return false;
		}
		if(c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' ||
		c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9' || c[i] == '0'){
			cout << "Es Numerico" << endl;
			cantidadPalabras--;
			return true;
	    }//end-else
	}//end-for
	
//verificar si la letra es alguno de los digitos [0-9],
//si es una letra minuscula [a-z], o mayuscula [A-Z]
}//end-bool

void encontrarPalabra(char actual[]){
	int i = 0;
	while(true){
		if(!esAlfaNumerico(actual)){
			break;
		}else{
			if(finEntrada(actual)){
				break;
			}//end-if
		}//end-else
		i++;
	}//end-while
//hacer un ciclo mientras el caracter no sea alfanumerico
//y tampoco sea *, leyendo y descartando los caracteres
//hasta encontrar el primer caractere alfanumerico. Utilizar
//la funcion esAlfaNumerico.

}//end-encontrar

void procesarPalabra(char actual[]){
	int i = 0;
	while(true){
		if(esAlfaNumerico(actual)){
			cantidadPalabras++;
		}
		finEntrada(actual);
		i++;
	}
//hacer un ciclo mientras el caracter sea alfanumerico
//para procesar todas las letras de la palabra. Utilizar
//la funcion esAlfaNumerico. Por cada letra chequear si
//es un alguna de las vocales. Finalmente incrementar la
//cantidad de palabras si la palabra contenia todas las
//vocales

}//end-procesar

int main(){
char actual[100];
while(true){
	cout << "Ingrese una cadena de caracteres: ";
	cin.getline(actual, 100);
    encontrarPalabra(actual);
    if(finEntrada(actual)) break;
    procesarPalabra(actual);
}
cout << "Cantidad de Palabras: " << cantidadPalabras << endl;
}
