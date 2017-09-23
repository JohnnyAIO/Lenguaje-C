#include<stdio.h>
#include<iostream>

using namespace std;

int main(int argc, char** argv){

int a, b, c, x, d,opcion;

//Directa
//a = c. x.a = c.b; x = (c.b)/a;
//b = x;
//Indirecta
//a = x a.d/b = x
//b = d;

cout << "1) Proporcionalidad Directa | x = (c*b)/a \n";
cout << "2) Proporcionalidad Indirecta | x = (a*d) / b\n";
cout << "----------------------\n";
cout << "Ingrese la Opcion \n";
cin >> opcion;
switch(opcion){
	case 1://Proporcionalidad Directa
	cout << "Ingrese el valor a \n";
	cin >> a;
	cout << "Ingrese el valor b \n";
	cin >> b;
	cout << "Ingrese el valor c \n";
	cin >> c;
	x = (c*b)/a;
	cout << "El resultado es: " << x << "\n";
	break;
	case 2://Proporcionalidad Indirecta
	cout << "Ingrese el valor a \n";
	cin >> a;
	cout << "Ingrese el valor b \n";
	cin >> b;
	cout << "Ingrese el valor d \n";
	cin >> d;
	x = (a*d)/b;
	cout << "El resultado es: " << x << "\n";
	break;
}


}//fin-programa