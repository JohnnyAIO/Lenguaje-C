#include "Circulo.h"


Circulo::Circulo(Punto2D xcentro, float xradio): Figura("Circulo"){
  centro = xcentro;
  radio = xradio;
}

float Circulo::perimetro(){
  return 2*(3.14*radio);
}
