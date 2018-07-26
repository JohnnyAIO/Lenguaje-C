#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;
const char DIR_ARCHIVO[] = "contactos.dat";

struct Contacto{
	char nombre[30];
	char apellido[30];
	int edad;
	char correo[45];
};
/*Funciones del Programa*/
void ingresarContactos(Contacto c);
Contacto leerContacto();
bool existeContacto(char nombre[], char apellido[]);
Contacto buscarContacto(char nombre[], char apellido[]);
void mostrarContacto(Contacto c);
void listarContactos();
void eliminarContacto(char nombre[], char apellido[]);
void actualizarContacto(char nombre[], char apellido[]);
/*******************************************************/

/*****************************************************/
//Funciones para el menu
void menuIngresa();
void menuBuscar();
void menuListado();
void menuEliminar();
void menuActualizar();
/****************************************************/

int main(){
	/*Agenda Electronica
	Ingresar Contactos (Completo)
	Buscar Contactos (Completo)
	Ver Listado (Completo)
	Eliminar un Contacto (Completo)
	Actualizar un Contacto (Completo)*/
	int opcion;
	do{
		system("cls");
		cout << "\t\t\t Agenda" << endl;
	    cout << "\t\t\t 1) Ingresar contacto" << endl;
	    cout << "\t\t\t 2) Buscar contacto " << endl;
	    cout << "\t\t\t 3) Ver listado " << endl;
	    cout << "\t\t\t 4) Eliminar un contacto" << endl;
	    cout << "\t\t\t 5) Actualizar un contacto" << endl;
	    cout << "\t\t\t 6) Salir " << endl;
	    cout << "\t\t\t ------------------------------------" << endl;
	    cout << "\t\t\t Ingrese su opcion: ";
	    cin >> opcion;
	    cin.ignore();
	    switch(opcion){
	    	case 1:
	    		system("cls"); // Limpiar pantalla
	    		menuIngresa();
	    		break;
	    	case 2:
	    		system("cls"); // Limpiar pantalla
	    		menuBuscar();
	    		break;
	    	case 3:
	    		system("cls"); // Limpiar pantalla
	    		menuListado();
	    		break;
	    	case 4:
	    		system("cls"); // Limpiar pantalla
	    		menuEliminar();
	    		break;
	    	case 5:
	    		system("cls"); // Limpiar pantalla
	    		menuActualizar();
	    		break;
	    	case 6:
	    		cout << "\t\t\t Gracias por utilizar el servicio :D" << endl;
	    		break;
	    	default:
	    		cout << "\t\t\t Opcion invalida, intenta otra vez" << endl;
		}
	}while(opcion != 6);
	return 0;
}//end-programa

void ingresarContactos(Contacto c){
	ofstream salida;
	salida.open(DIR_ARCHIVO, ios::binary | ios::app);
	salida.write((char*)&c,sizeof(Contacto));
	salida.close();
	
}//fin-ingresar

Contacto leerContacto(){
	Contacto c;
	cout << "\t\t\t Nombre: ";
	cin.getline(c.nombre,30);
	cout << "\t\t\t Apellido: ";
	cin.getline(c.apellido,30);
	cout << "\t\t\t Edad :";
	cin >> c.edad;
	cin.ignore();
	cout << "\t\t\t Correo:";
	cin.getline(c.correo,45);
	return c;
}//Leer-Contacto

bool existeContacto(char nombre[], char apellido[]){
	Contacto c;
	ifstream entrada;
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Contacto))){
			//strcmp -> String comparation -> Comparar cadenas de texto
			if(strcmp(nombre, c.nombre)==0 && strcmp(apellido, c.apellido)==0){
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
}//end-existe

Contacto buscarContacto(char nombre[], char apellido[]){
	Contacto c;
	ifstream entrada;
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Contacto))){
			//strcmp -> String comparation -> Comparar cadenas de texto
			if(strcmp(nombre, c.nombre)==0 && strcmp(apellido, c.apellido)==0){
				entrada.close();
				return c;
			}//end-if
		}//end-while
	}//end-if
}//end-Contacto

void mostrarContacto(Contacto c){
	cout << endl;
	cout << "\t\t\t Nombre: " << c.nombre << endl;
	cout << "\t\t\t Apellido: " << c.apellido << endl;
	cout << "\t\t\t Edad: " << c.edad << endl;
	cout << "\t\t\t Correo: " << c.correo << endl;
	cout << endl;
}//end-contacto

void listarContactos(){
	ifstream entrada;
	entrada.open(DIR_ARCHIVO, ios::binary);
	Contacto c;
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Contacto))){
			mostrarContacto(c);
	}//end-while
	    entrada.close();
	}else{
		cout << "No se puede abrir los archivos";
	}//end-else
	
}//end-listar

void eliminarContacto(char nombre[], char apellido[]){
	Contacto c;
	ifstream entrada;
	ofstream temporal;
	temporal.open("temp.dat", ios::binary);
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Contacto))){
			if(strcmp(nombre, c.nombre)!=0 || strcmp(apellido,c.apellido)!=0){
				temporal.write((char*)&c, sizeof(Contacto));
			}//end-if
		}//end-while
	}//end-if
	entrada.close();
	temporal.close();
	remove(DIR_ARCHIVO);
	rename("temp.dat", DIR_ARCHIVO);
}//end-eliminar

void actualizarContacto(char nombre[], char apellido[]){
	Contacto c;
	ifstream entrada;
	ofstream temporal;
	temporal.open("temp.dat", ios::binary);
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Contacto))){
			if(strcmp(nombre, c.nombre)==0 && strcmp(apellido,c.apellido)==0){
				Contacto actualizado = leerContacto();
				temporal.write((char*)&actualizado, sizeof(Contacto));
			}else{
				temporal.write((char*)&c, sizeof(Contacto));
			}
		}//end-while
	}//end-if
	entrada.close();
	temporal.close();
	remove(DIR_ARCHIVO);
	rename("temp.dat", DIR_ARCHIVO);
}//end-void

void menuIngresa(){
	cout << "\t\t\t Ingreso de nuevo Contacto" << endl;
	Contacto nuevo = leerContacto();
	if(existeContacto(nuevo.nombre, nuevo.apellido)){
		cout << "Contacto existe" << endl;
	}else{
		ingresarContactos(nuevo);
	    cout << "\t\t\t Contacto agregado con exito" << endl;
	}//end-else
}//end-menu

void menuBuscar(){
	cout << "\t\t\t Buscar Contacto" << endl;
	char nombre[30], apellido[30];
	cout << "\t\t\t Ingrese los datos de busqueda :" << endl;
	cout << "\t\t\t Nombre: ";
	cin.getline(nombre,30);
	cout << "\t\t\t Apellido: ";
	cin.getline(apellido,30);
	cin.ignore();
	if(existeContacto(nombre,apellido)){
		Contacto buscado = buscarContacto(nombre,apellido);
		mostrarContacto(buscado);
	}else{
		cout << "\t\t\t No se encuentra ese contacto" << endl;
	}//end-else
}//end-else

void menuListado(){
	cout << "\t\t\t Lista de Contacto" << endl;
	listarContactos();
	getch(); //Obtener Caracter
}//end-else

void menuEliminar(){
	cout << "\t\t\t Menu de Eliminar " << endl;
	char nombre[30], apellido[30];
	cout << "\t\t\t Ingrese los datos de direccion" << endl;
	cout << "\t\t\t Nombre: ";
	cin.getline(nombre,30);
	cout << "\t\t\t Apellido: ";
	cin.getline(apellido,30);
	cin.ignore();
	if(existeContacto(nombre,apellido)){
		Contacto eliminar = buscarContacto(nombre,apellido);
		int opcion;
		cout << "\t\t\t Seguro que desea eliminar el siguiente contacto?";
		mostrarContacto(eliminar);
		do{
			cout << "\t\t\t Si[1].................No[2]:"; 
			cin >> opcion;
			switch(opcion){
				case 1:
					eliminarContacto(nombre,apellido);
		            cout << "\t\t\t Contacto eliminado con exito" << endl;
		            break;
		        case 2: break;
				default:
				cout << "Opcion invalida" << endl;    	
			}//end-swithc
		}while(opcion != 1 && opcion != 2);
	}else{
		cout << "No existe el contacto" << endl;
	}//end-else
}//end-eliminar

void menuActualizar(){
	cout << "\t\t\t Menu de Actualizar " << endl;
	char nombre[30], apellido[30];
	cout << "\t\t\t Ingrese los datos de direccion" << endl;
	cout << "\t\t\t Nombre: ";
	cin.getline(nombre,30);
	cout << "\t\t\t Apellido: ";
	cin.getline(apellido,30);
	cin.ignore();
	if(existeContacto(nombre,apellido)){
		Contacto modificar = buscarContacto(nombre,apellido);
		cout << "\t\t\t Registro a modificar" << endl;
		mostrarContacto(modificar);
		actualizarContacto(nombre,apellido);
		cout << "\t\t\t Contacto actualizado" << endl;
	}else{
		cout << "No existe el contacto" << endl;
	}//end-else
	
}//end-acutalizar

