//archivo Circulo

#include "Figura.h"
#include "Punto2D.h"
class Circulo: public Figura{
private:
  Punto2D centro;
  float radio;
public:
  Circulo(Punto2D xcentro, float xradio);
  float perimetro();
};