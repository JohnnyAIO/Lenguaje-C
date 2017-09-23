#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main(int argc,char**argv){
	int a,b,resultado,opcion;
	cout << "1)Sumar\n";
	cout << "2)Restar\n";
	cout << "3)Multiplicar\n";
	cout << "4)Dividir\n";
	cout << "5)Potencia\n";
	cout << "6)Raiz\n";
	cout << "Ingrese una opcion\n";
	cin >> opcion;
	switch(opcion){
		case 1:
			cout << "Ingrese un numero\n";
			cin >> a;
			cout << "Ingrese otro numero\n";
			cin >> b;
			resultado = a+b;
			cout << "Total es:" << resultado << "\n";
			break;
		case 2:
			cout << "Ingrese un numero\n";
			cin >> a;
			cout << "Ingrese otro numero\n";
			cin >> b;
			resultado = a-b;
			cout << "Total es:" << resultado << "\n";
			break;
		case 3:
			cout << "Ingrese un numero\n";
			cin >> a;
			cout << "Ingrese otro numero\n";
			cin >> b;
			resultado = a*b;
			cout << "Total es:" << resultado << "\n";
			break;
		case 4:
			cout << "Ingrese un numero\n";
			cin >> a;
			cout << "Ingrese otro numero\n";
			cin >> b;
			resultado = a/b;
			cout << "Total es:" << resultado << "\n";
			break;
		case 5:
			cout << "Ingrese la base\n";
			cin >> a;
			cout << "Ingrese el exponente\n";
			cin >> b;
			resultado = pow(a,b);
			cout << "Total es:" << resultado << "\n";
			break;
		case 6:
			cout << "Ingrese un numero\n";
			cin >> a;
			resultado = sqrt(a);
			cout << "Total es:" << resultado << "\n";
			break;
				
	}//end-case
}//end-inicio
