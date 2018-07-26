#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;
const char DIR_ARCHIVO[] = "asistencia.dat";

struct Estudiante{
	char nombre[30];
	char apellido[30];
	int ci;
};

void ingresarEstudiante(Estudiante c);
Estudiante leerEstudiante();
bool existeEsctudiante(char nombre[], char apellido[]);
Estudiante buscarEstudiante(char nombre[], char apellido[]);
void mostrarEstudiante(Estudiante c);
void listarEstudiante();
void eliminarEstudiante(char nombre[], char apellido[]);
void actualizarEstudiante(char nombre[], char apellido[]);

//Funciones para el menu
void menuIngresa();
void menuBuscar();
void menuListado();
void menuEliminar();
void menuActualizar();
/****************************************************/

int main(){
	int opcion;
	do{
	//system("cls");
		cout << "\t\t\t Asistencia" << endl;
	    cout << "\t\t\t 1) Ingresar estudiante" << endl;
	    cout << "\t\t\t 2) Buscar estudiante " << endl;
	    cout << "\t\t\t 3) Ver listado " << endl;
	    cout << "\t\t\t 4) Eliminar un estudiante" << endl;
	    cout << "\t\t\t 5) Actualizar un estudiante" << endl;
	    cout << "\t\t\t 6) Salir " << endl;
	    cout << "\t\t\t ------------------------------------" << endl;
	    cout << "\t\t\t Ingrese su opcion: ";
	    cin >> opcion;
	    cin.ignore();
	    switch(opcion){
	    	case 1:
	    		system("cls");
	    		menuIngresa();
	    		break;
	    	case 2:
	    		system("cls");
	    		menuBuscar();
	    		break;
	    	case 3:
	    		system("cls");
	    		menuListado();
	    		break;
	    	case 4:
	    		system("cls");
	    		menuEliminar();
	    		break;
	    	case 5:
	    		system("cls");
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
}

void ingresarEstudiante(Estudiante c){
	ofstream salida;
	salida.open(DIR_ARCHIVO, ios::binary | ios::app);
	salida.write((char*)&c,sizeof(Estudiante));
	salida.close();
	
}//fin-ingresar

Estudiante leerEstudiante(){
	Estudiante c;
	cout << "\t\t\t Nombre: ";
	cin.getline(c.nombre,30);
	cout << "\t\t\t Apellido: ";
	cin.getline(c.apellido,30);
	cout << "\t\t\t Cedula :";
	cin >> c.ci;
	cin.ignore();
	return c;
}//Leer

bool existeEstudiante(char nombre[], char apellido[]){
	Estudiante c;
	ifstream entrada;
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Estudiante))){
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

Estudiante buscarEstudiante(char nombre[], char apellido[]){
	Estudiante c;
	ifstream entrada;
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Estudiante))){
			//strcmp -> String comparation -> Comparar cadenas de texto
			if(strcmp(nombre, c.nombre)==0 && strcmp(apellido, c.apellido)==0){
				entrada.close();
				return c;
			}//end-if
		}//end-while
	}//end-if
}//end

void mostrarEstudiante(Estudiante c){
	cout << endl;
	cout << "\t\t\t Nombre: " << c.nombre << endl;
	cout << "\t\t\t Apellido: " << c.apellido << endl;
	cout << "\t\t\t Cedula: " << c.ci << endl;
	cout << endl;
}//end

void listarEstudiante(){
	ifstream entrada;
	entrada.open(DIR_ARCHIVO, ios::binary);
	Estudiante c;
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Estudiante))){
			mostrarEstudiante(c);
	}//end-while
	    entrada.close();
	}else{
		cout << "No se puede abrir los archivos";
	}//end-else
	
}//end-listar

void eliminarEstudiante(char nombre[], char apellido[]){
	Estudiante c;
	ifstream entrada;
	ofstream temporal;
	temporal.open("temp.dat", ios::binary);
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Estudiante))){
			if(strcmp(nombre, c.nombre)!=0 || strcmp(apellido,c.apellido)!=0){
				temporal.write((char*)&c, sizeof(Estudiante));
			}//end-if
		}//end-while
	}//end-if
	entrada.close();
	temporal.close();
	remove(DIR_ARCHIVO);
	rename("temp.dat", DIR_ARCHIVO);
}//end-eliminar

void actualizarEstudiante(char nombre[], char apellido[]){
	Estudiante c;
	ifstream entrada;
	ofstream temporal;
	temporal.open("temp.dat", ios::binary);
	entrada.open(DIR_ARCHIVO, ios::binary);
	if(entrada.good()){
		while(entrada.read((char*)&c, sizeof(Estudiante))){
			if(strcmp(nombre, c.nombre)==0 && strcmp(apellido,c.apellido)==0){
				Estudiante actualizado = leerEstudiante();
				temporal.write((char*)&actualizado, sizeof(Estudiante));
			}else{
				temporal.write((char*)&c, sizeof(Estudiante));
			}
		}//end-while
	}//end-if
	entrada.close();
	temporal.close();
	remove(DIR_ARCHIVO);
	rename("temp.dat", DIR_ARCHIVO);
}//end-void

void menuIngresa(){
	cout << "\t\t\t Ingreso de nuevo Estudiante" << endl;
	Estudiante nuevo = leerEstudiante();
	if(existeEstudiante(nuevo.nombre, nuevo.apellido)){
		cout << "Estudiante existe" << endl;
	}else{
		ingresarEstudiante(nuevo);
	    cout << "\t\t\t Estudiante agregado con exito" << endl;
	}//end-else
}//end-menu

void menuBuscar(){
	cout << "\t\t\t Buscar Estudiante" << endl;
	char nombre[30], apellido[30];
	cout << "\t\t\t Ingrese los datos de busqueda :" << endl;
	cout << "\t\t\t Nombre: ";
	cin.getline(nombre,30);
	cout << "\t\t\t Apellido: ";
	cin.getline(apellido,30);
	cin.ignore();
	if(existeEstudiante(nombre,apellido)){
		Estudiante buscado = buscarEstudiante(nombre,apellido);
		mostrarEstudiante(buscado);
	}else{
		cout << "\t\t\t No se encuentra ese estudiante" << endl;
	}//end-else
}//end-else

void menuListado(){
	cout << "\t\t\t Lista de Estudiantes" << endl;
	listarEstudiante();
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
	if(existeEstudiante(nombre,apellido)){
		Estudiante eliminar = buscarEstudiante(nombre,apellido);
		int opcion;
		cout << "\t\t\t Seguro que desea eliminar el siguiente estudiante?";
		mostrarEstudiante(eliminar);
		do{
			cout << "\t\t\t Si[1].................No[2]:"; 
			cin >> opcion;
			switch(opcion){
				case 1:
					eliminarEstudiante(nombre,apellido);
		            cout << "\t\t\t Estudiante eliminado con exito" << endl;
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
	if(existeEstudiante(nombre,apellido)){
		Estudiante modificar = buscarEstudiante(nombre,apellido);
		cout << "\t\t\t Registro a modificar" << endl;
		mostrarEstudiante(modificar);
		actualizarEstudiante(nombre,apellido);
		cout << "\t\t\t Estudiante actualizado" << endl;
	}else{
		cout << "No existe el estudiante" << endl;
	}//end-else
	
}//end-acutalizar

