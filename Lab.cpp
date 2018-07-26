#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;
const char DIR_ARCHIVO[] = "salidas.dat";

struct Cuentas{
  int cedula;
  char nombre[100];
  int capital;
};
/*Boceto del Programa**/
void IngresarCuentas(Cuentas c);
Cuentas leerCuentas();
bool existeCuenta(int cedula);
Cuentas buscarCuentas(int cedula);
Cuentas leerEstatus();
void mostrarCuentas(Cuentas c);
void listarCuentas();
void actualizarCuentas(int cedula);
void actualizarEstado(int cedula);
/***********************************************/

/*************************************/
void menuIngresa();
void menuBuscar();
void menuListado();
void menuActualizar();
void descontarCuentas();
/*****************************************/

int main(){
  int opcion;
  do{
    cout << "\t\t\t Registro de Transacciones" << endl;
    cout << "\t\t\t 1) Ingresar Usuario " << endl;
    cout << "\t\t\t 2) Buscar Usuario " << endl;
    cout << "\t\t\t 3) Ver Listado" << endl;
    cout << "\t\t\t 4) Actualizar Usuario" << endl;
    cout << "\t\t\t 5) Descontar Cuentas" << endl;
    cout << "\t\t\t 6) Salir" << endl;
    cout << "\t\t\t --------------------------------" << endl;
    cout << "\t\t\t Ingrese su opcion: ";
    cin >> opcion;
    cin.ignore();
    switch(opcion){
      case 1:
      menuIngresa();
      break;
      case 2:
      menuBuscar();
      break;
      case 3:
      menuListado();
      break;
      case 4:
      menuActualizar();
      break;
      case 5:
      descontarCuentas();
      break;
      case 6:
      cout << "\t\t\t Gracias por utilizar este servicio,";
	  cout << "\t\t\t que tenga un buen dia :D" << endl;
      break;
      default:
      cout << "\t\t\t Opcion invalida, intenta otra vez " << endl;
    }//end-case
  }while(opcion != 6);

  return 0;
}//end-main

void ingresarCuentas(Cuentas c){
  ofstream salida;
  salida.open(DIR_ARCHIVO, ios::binary | ios::app);
  salida.write((char*)&c, sizeof(Cuentas));
  salida.close();
}//end-ingresar

Cuentas leerCuentas(){
  Cuentas c;
  cout << "\t\t\t Cedula:";
  cin >> c.cedula;
  cin.ignore();
  cout << "\t\t\t Nombre:";
  cin.getline(c.nombre, 30);
  cout << "\t\t\t Capital:";
  cin >> c.capital;
  cin.ignore();
  return c;
}//end-contacto

Cuentas leerEstatus(){
  Cuentas c;
  int monto;
  cout << "\t\t\t Cedula:";
  cin >> c.cedula;
  cin.ignore();
  cout << "\t\t\t Nombre:";
  cin.getline(c.nombre, 30);
  cout << "\t\t\t Capital:";
  cin >> c.capital;
  cout << "\t\t\t Ingrese monto:";
  cin >> monto;
  c.capital = c.capital + monto;
  cin.ignore();
  return c;
}

bool existeCuenta(int cedula){
  Cuentas c;
  ifstream entrada;
  entrada.open(DIR_ARCHIVO, ios::binary);
  if(entrada.good()){
    while(entrada.read((char*)&c, sizeof(Cuentas))){
      if(cedula == c.cedula){
        entrada.close();
        return true;
    }//end-if
  }//end-while
  entrada.close();
  return false;
}else{
  entrada.close();
  return false;
}//end-else
}//end-buscar

Cuentas buscarCuentas(int cedula){
  Cuentas c;
  ifstream entrada;
  entrada.open(DIR_ARCHIVO, ios::binary);
  if(entrada.good()){
    while(entrada.read((char*)&c, sizeof(Cuentas))){
      if(cedula == c.cedula){
        entrada.close();
        return c;
      }//end-if
    }//end-while
  }//end-if2
}//end-cuentas

void mostrarCuentas(Cuentas c){
  cout << endl;
	cout << "\t\t\t Cedula: " << c.cedula << endl;
	cout << "\t\t\t Nombre: " << c.nombre << endl;
	cout << "\t\t\t Cuentas: " << c.capital << endl;
	cout << endl;
}

void listarCuentas(){
  ifstream entrada;
  entrada.open(DIR_ARCHIVO, ios::binary);
  Cuentas c;
  if(entrada.good()){
    while(entrada.read((char*)&c, sizeof(Cuentas))){
      mostrarCuentas(c);
    }//end-while
    entrada.close();
  }else{
    cout << "\t\t\t No se puede abrir los archivos" << endl;
  }//end-else
}//end-listar

void actualizarCuentas(int cedula){
  Cuentas c;
  ifstream entrada;
  ofstream temporal;
  temporal.open("temp.dat", ios::binary);
  entrada.open(DIR_ARCHIVO, ios::binary);
  if(entrada.good()){
    while(entrada.read((char*)&c, sizeof(Cuentas))){
      if(cedula == c.cedula){
        Cuentas actualizado = leerCuentas();
        temporal.write((char*)&actualizado, sizeof(Cuentas));
      }else{
        temporal.write((char*)&c, sizeof(Cuentas));
      }//end-else
    }//end-while
  }//end-if
  entrada.close();
  temporal.close();
  remove(DIR_ARCHIVO);
  rename("temp.dat", DIR_ARCHIVO);
}//end-void

void actualizarEstado(int cedula){
  Cuentas c;
  ifstream entrada;
  ofstream temporal;
  temporal.open("temp.dat", ios::binary);
  entrada.open(DIR_ARCHIVO, ios::binary);
  if(entrada.good()){
    while(entrada.read((char*)&c, sizeof(Cuentas))){
      if(cedula == c.cedula){
	  	Cuentas actualizado = leerEstatus();    	
        temporal.write((char*)&actualizado, sizeof(Cuentas));
      }else{
        temporal.write((char*)&c, sizeof(Cuentas));
      }//end-else
    }//end-while
  }//end-if
  entrada.close();
  temporal.close();
  remove(DIR_ARCHIVO);
  rename("temp.dat", DIR_ARCHIVO);
	
	
}//end-void



void menuIngresa(){
  cout << "\t\t\t Registrar un Nuevo Usuario" << endl;
  Cuentas nuevo = leerCuentas();
  if(existeCuenta(nuevo.cedula)){
    cout << "\t\t\t El Usuario existe D: " << endl;
  }else{
    ingresarCuentas(nuevo);
    cout << "\t\t\t Usuario agragado con exito :D " << endl;
  }//end-else
}//end-menu

void menuBuscar(){
  cout << "\t\t\t Buscar Usuario" << endl;
  int cedula;
  cout << "\t\t\t Ingrese la cedula: ";
  cin >> cedula;
  if(existeCuenta(cedula)){
    Cuentas buscado = buscarCuentas(cedula);
    mostrarCuentas(buscado);
  }else{
    cout << "\t\t\t No se encuentra el Usuario D:" << endl;
  }//end-if
}//end-while

void menuListado(){
  cout << "\t\t\t Lista de Usuarios" << endl;
  listarCuentas();
  getch();
}//end-Listado

void menuActualizar(){
  int cedula;
  cout << "\t\t\t Menu de Actualizar " << endl;
  cout << "\t\t\t Ingrese su cedula: ";
  cin >> cedula;
  if(existeCuenta(cedula)){
    Cuentas modificar = buscarCuentas(cedula);
    cout << "\t\t\t Registro a modificar" << endl;
    mostrarCuentas(modificar);
    actualizarCuentas(cedula);
    cout << "\t\t\t Usuario actualizado :D" << endl;
  }else{
    cout << "\t\t\t No existe el Usuario D: " << endl;
  }//end.else
}//end-actualizar

void descontarCuentas(){
	int cedula;
	cout << "\t\t\t Ingrese su cedula: ";
	cin >> cedula;
	if(existeCuenta(cedula)){
		Cuentas modificar = buscarCuentas(cedula);
		cout << "\t\t\t Estatus de la Cuenta " << endl;
		mostrarCuentas(modificar);
		actualizarEstado(cedula);
	}
}
