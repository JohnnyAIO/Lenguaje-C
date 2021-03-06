#include "Rectangulo.h"

Rectangulo::Rectangulo(Punto2D pp0, Punto2D pp1): Figura("Rectangulo"){
  p0.x = pp0.x;
  p0.y = pp0.y;
  p1.x = pp1.x;
  p1.y = pp1.y;
}

float Rectangulo::perimetro(){
  return (p1.x - p0.x)*2 + (p1.y - p0.y)*2;
}
