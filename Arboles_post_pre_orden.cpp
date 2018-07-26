#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo{
	int n;
	struct nodo *izq, *der;
};

typedef struct nodo *A;

A crearNodo(int x){
	A nuevoNodo = new(struct nodo);
	nuevoNodo -> n = x;
	nuevoNodo -> izq = NULL;
	nuevoNodo -> der = NULL;
	
	return nuevoNodo;  
}


void insertar(A &rama, int x){
	if(rama == NULL){
		rama = crearNodo(x);
	}else if (x < rama ->n){
		insertar(rama->izq, x);
	}else if(x > rama->n){
		insertar(rama->der, x);
	}
}

void preOrden(A rama){
	if(rama != NULL){
		cout << rama->n << " ";
		preOrden(rama->izq);
		preOrden(rama->der);
	}
}

void Orden(A rama){
	if(rama != NULL){
		Orden(rama->izq);
		cout << rama->n << " ";
		Orden(rama->der);
	}
}

void postOrden(A rama){
	if(rama != NULL){
		postOrden(rama->izq);
		postOrden(rama->der);
		cout << rama->n << " ";
	}
}

void Mostrar(A rama, int n){
	if(rama == NULL){
		return;
	}
	Mostrar(rama->der, n+1);
	for(int i=0; i<n;i++){
		cout << rama->n << endl;
	}
	Mostrar(rama->izq, n+1);
}

int main(){
	A rama = NULL;
	int n, x;
	cout << "Arbol" << endl;
	cout << "Numero de Nodos de un arbol: " << endl;
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << "Ingrese la rama del arbol: ";
		cin >> x;
		insertar(rama, x);
	}
	cout << "Mostrando el Arbol: " << endl;
	
	cout << "En Orden: ";
	Orden(rama);
	cout << endl;
	cout << "En Preorden: ";
	preOrden(rama);
	cout << endl;
	cout << "En Postorden: ";
	postOrden(rama);
	
	cout << endl << endl;
	system("pause");
	return 0;
}
