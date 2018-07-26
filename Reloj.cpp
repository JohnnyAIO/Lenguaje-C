#include <iostream>
using namespace std;

int main(){
	float hora, minutos, diff, min_horas, min_minutos;
	cout << "Ingrese la hora: ";
	cin >> hora;
	cout << "Ingrese los minutos: ";
	cin >> minutos;
	min_horas = hora*5;
	min_minutos = minutos*5/60;
	diff = min_horas+min_minutos-minutos;
	cout << "Total de diferencia es: " << diff*6;
	
	return 0;
}
