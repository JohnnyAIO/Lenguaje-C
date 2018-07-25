#include <iostream>
#include <string.h>
using namespace std;

struct Persona{
  int cedula;
  string nombre;
  string apellido;
  int edad;

};
Persona a;
Persona personas[4];
struct Grupo{
  Persona integrantes[4];
};

int main(){
  Persona a;
  a.nombre = "Jonathan";
  cout << a.nombre << endl;

}
