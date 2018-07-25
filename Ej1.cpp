#include <iostream>
#include <cstring>
using namespace std;
struct Producto{
  string nombre[100];
  string codigo[100];
  float precio[10];
};
Producto a;
int main(){
  Producto a;
  string busqueda;
  float descuento;
  for(int i = 0; i < 3; i++){
    cout << "Nombre del Producto " << i+1 << endl;
    cin >> a.nombre[i];
    cout << "Codigo del Producto " << i+1 << endl;
    cin >> a.codigo[i];
    cout << "Precio del Producto " << i+1 << endl;
    cin >> a.precio[i];
  }
  cout << "Codigo | Producto | Precio | Descuento  " << endl;
  for(int i = 0; i < 3; i++){
    cout << a.nombre[i] << "\t";
    cout << a.codigo[i] << "\t";
    cout << a.precio[i] << "\t";
    if(strcmp(a.codigo[i],"C") != 0){
      descuento = a.precio[i]*0.10;
      cout << descuento << endl;
    }
    cout << "" << endl;
  }
  cout << "Ingrese un producto a buscar: ";
  cin >> busqueda;
  bool x = false;
  for(int i = 0; i < 3; i++){
    if(busqueda == a.nombre[i]){
      x = true;
      break;
    }
  }
  cout << x << endl;

return 0;
}//end-main
