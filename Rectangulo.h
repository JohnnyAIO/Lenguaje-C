//archivo Rectangulo
#include "Punto2D.h"
#include "Figura.h"
#ifndef Rectangulo_h
#define Rectangulo_h
class Rectangulo: public Figura{
private:
  Punto2D p0, p1;

public:
  Rectangulo(Punto2D pp0, Punto2D pp1);
  float perimetro();
};

#endif
