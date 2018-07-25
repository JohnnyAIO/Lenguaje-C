//Archivo Figura.h
#ifndef Figura_h
#define Figura_h

#include <iostream>
using namespace std;
class Figura{
protected:
  string tipo;
public:
  Figura(string tipo);
  float perimetro();
  string getTipo();
};

#endif