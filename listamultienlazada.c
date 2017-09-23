#include <stdio.h>
#include <stdlib.h>
// este programa permite crear una lista multienlazada de numeros
typedef struct NODO

{
    int ELEM;
    struct NODO *izq;
    struct NODO *der;

}tipo;

//Define tipo de dato
typedef tipo *Pnodo;
main(){

//funciones y procedimientos a implementar para la lista
	int Es_vacia (NODO *D);
	void EncolarIzq (Pnodo *D, Pnodo *I, int E);
	void ImprimirIzq(NODO *I);
	void DesencolarIzq (Pnodo *I);
	void TopeDer (NODO *D);


//Declaración de variables locales

        int oo; //Variable usada como la instrucción GETCH
	int N; //Permite conocer la cantidad de elementos a introducir en la pila
	int NUM; //Permite capturar por teclado el elemento a apilar


	//Inicializa Punteros
	NODO *izquierda=NULL;
        NODO *derecha=NULL;

	printf("Introduzca cuantos elementos va a introducir en esta lista: ");
	scanf("%i",&N);
	for(int i=1;i<=N;i++){
		printf("Introduzca el numero colocar en lista: ");
		scanf("%i",&NUM);
		EncolarIzq(&derecha, &izquierda, NUM);
	}
        printf("\n Lista impresa de Izquierda a Derecha\n");
	ImprimirIzq(izquierda);
	printf("\n presione tecla para continuar\n");
        printf("\n Desencolando por la Izquierda un elemento\n");

	DesencolarIzq(&izquierda);

	//Verifica si esta vacia la lista
	if(Es_vacia(izquierda)!=1) ImprimirIzq(izquierda);
	printf("\n presione tecla para continuar\n");
        scanf("%i",&oo);
	//Imprime el tope derecho de la lista

	TopeDer(derecha);
	printf("\n presione tecla para continuar\n");
        scanf("%i",&oo);
	printf("\n verificando si la cola es vacia: \n");
	if(Es_vacia(izquierda)==1) printf("\n La cola es Vacia \n");
	else printf("\n La cola no es Vacia \n");
	printf("\n presione tecla para continuar\n");
	scanf("%i",&oo);
}//fin del main
//****************************** Acciones y Funciones

void EncolarIzq (Pnodo *D, Pnodo *I, int E){

	NODO *nuevo = (NODO*)malloc(sizeof(NODO));	//Reserva el espacio de memoria para un Nodo llamado NUEVO
	nuevo->ELEM = E;	//Ingresa dentro de la variable ELEM que existe en NUEVO un valor
	if (*D==NULL){	//Verifica si el puntero D apunta a NULL
	     nuevo->izq = *I;	//El puntero IZQ dentro de NUEVO apuntara a NULL
             nuevo->der = *D;	//El puntero DER dentro de NUEVO apuntara a NULL
		 *I = nuevo;	//El puntero I (izquierdo) apuntara a NUEVO
                 *D = nuevo;	//El puntero D (derecho) apuntara a NUEVO
	}
	else {
		NODO *AUX;	//Crea un puntero auxiliar (AUX) con la dimension de NODO
		AUX = *D;	//Posiciona al puntero AUX en lo que apunta D
		while (AUX->der != NULL){	//Verifica si el puntero DER en AUX apunta a NULL
			AUX=AUX->der;	//Desplaza AUX por la parte derecha de AUX
		}
		AUX->der = nuevo ;	//El puntero DER en AUX apuntara a NUEVO
                nuevo->der = NULL;	//El puntero DER en el nodo NUEVO apuntara a NULL
                nuevo->izq = AUX;	//El puntero IZQ en el nodo NUEVO apuntara a AUX
                *D=nuevo;	//El puntero D apuntara al nodo NUEVO
	}

}

void DesencolarIzq (Pnodo *I){
	if (*I != NULL){	//Verifica si el Puntero I apunta a NULL
		NODO *AUX;	//Crea un puntero AUX con la dimension de NODO
		AUX = *I;	//AUX se posiciona en lo que apunta I
		*I = AUX->der;	//El puntero I lo desplaza para lo que apunta AUX por DER
		free(AUX);	//Libera Memoria
   	}
	else printf("La Cola esta vacia");
}

void TopeDer (NODO *D){

    if (D != NULL) printf("\n Mostrando el tope derecho de la Cola: %i \n",D->ELEM);
    else printf ("La Cola esta vacia...");
}



int Es_vacia (NODO *D){
	if (D == NULL)	//Verifica si el puntero D apunta a NULL
	     return(1);
       else
		return (0);
}

void ImprimirIzq(NODO *I){
  NODO *AUX;	//Crea un puntero AUX con la dimensión de NODO
  AUX = I;	//Posiciona AUX en donde esta I
  if (AUX != NULL)	//Verifica si AUX apunta a NULL

  {
	printf("Tope Izquierdo: %i",AUX->ELEM); //Imprime lo que contiene AUX en la variable ELEM
        AUX=AUX->der;	//Desplaza AUX por la derecha
  }
  while (AUX != NULL)	//Verifica si AUX apunta a NULL
  {
	printf("-> %i",AUX->ELEM);	//Imprime lo que contiene la variable ELEM
        AUX=AUX->der;	//Desplaza AUX por la derecha

  }
  	printf("->NULL");
}//Fin Void