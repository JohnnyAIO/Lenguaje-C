//Archivo Linea
#include "Punto2D.h"
#include "Figura.h"
#ifndef LINEA_h
#define LINEA_h
class Linea: public Figura{
private:
  Punto2D p0, p1;

public:
  Linea(Punto2D pp0, Punto2D pp1);
  float perimetro();
};
#endif