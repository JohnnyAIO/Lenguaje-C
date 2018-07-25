#include "Figura.h"

#include <iostream>
using namespace std;
Figura::Figura(string tipo){
  Figura::tipo = tipo;
}

float Figura::perimetro(){
	return 0;
}

string Figura::getTipo(){
	return tipo;
}
