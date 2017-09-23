#include <stdio.h>

struct nodo{
	int dato;
	struct nodo *siguiente;
}*inicio=NULL, *final = NULL, *aux;

void Agregar(int n){
	aux = new nodo;
	aux -> dato = n;
	if(inicio==NULL){
		inicio=final=aux;
		aux -> siguiente = NULL;
	}else{
		aux -> siguiente = NULL;
		final -> siguiente = NULL;
		final = aux;
	}
}
void Listado(){
	printf("Mostrando los datos\n");
	aux = inicio;
	while(aux != NULL){
		printf("%d", aux -> dato);
		aux = aux -> siguiente;
	} 
}

main(){
	int opcion, n, i;
	do{
	printf("Implementacion de las colas\n");
	printf("1) Insertar elementos\n");
	printf("2) Mostrar elementos\n");
	printf("3) Salir del programa\n");
	printf("Ingrese su opcion\n");
	scanf("%d", &opcion);
	switch(opcion){
		case 1:
		printf("Ingrese un numero \n");
		scanf("%d", &n);
		Agregar(n);
		break;
		case 2:
		Listado();
		break;
		case 3:
		return;
	}
	}while(opcion != 3);
}