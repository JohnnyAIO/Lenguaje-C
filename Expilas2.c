	// ********************** Librerias
#include <stdio.h>
#include <stdlib.h>
	//******************* Defino la estructura de la Pila con sus variables
typedef struct pila {      
         float base;       
         float altura;
         struct pila *prox; //Creo la estructura *prox para copiar la estructura
         };                 //anterior completa para otra pila.
typedef pila *Ppila;        // Defino un puntero

	//*********************** Inicializa las variables a trabajar
	.
	.
	.

	// *********************   Estructura principal del programa
main(){                     
	.
	.
	.

      pila *primero = NULL;    //Inicializa la pila con NULL
ini:  void apilar (Ppila *p, float b, float l);    //Defino accion o procedimiento apilar
      void desapilar (Ppila *p);    //Defino accion o procedimiento desapilar
      int es_vacia (pila *P);    //Defino funcion para verificar si esta vacia
      void tope (pila *p, float b, float l, float a);    //Defino accion o procedimiento tope
      void imprimir (pila *p);    //Defino accion o procedimiento imprimir
	.
	.
	.
	
	apilar (&primero,b,l);      //Llamo la accion apilar
	desapilar (&primero);         //Llamo la accion desapilar
        imprimir(primero);            //Llamo la acccion imprimir
        es_vacia (primero); //Llamo la funcion es_vacia para verificar si hay datos en la pila
        if (primero==NULL){printf ("\n   LA PILA ESTA TODA VACIA\n");} //Comparo con el puntero
        else {printf ("\n   SI EXISTEN DATOS\n");}
        printf (" \n Presione una tecla para continuar\n ");
	tope (primero,b,l,a);        //Llamo la accion tope
        goto ini;      //Retorno
              
}//fin main  

	//*********************** Funciones, Acciones o Procedimientos

void desapilar (Ppila *p){   //Esta es la accion Desapilar con el puntero p
	.
	.
	.
}
   
void tope (pila *p, float b, float l){          //Esta es la accion tope
     pila *aux;     //Creo puntero aux
     aux = p;       //Almaceno dentro de aux lo que tenga el Puntero p
    if (aux!=NULL){ //Comparo aux con NULL para ver si imprimo los datos o no
             printf ("\n   Base   %g",aux->base); //Imprimo cada dato
             printf ("\n   Altura %g",aux->altura);
             }
     else {printf ("\n NO HAY NADA EN LA PILA\n");}         //Imprimo que no hay nada aux==NULL
}//fin void
    
void apilar (Ppila *p, float b,float l){           //Accion apilar
	.
	.
	.
}//fin void
 
int es_vacia (pila *P){ return (P == NULL); } //Si esta vacia envia P==NULL

void imprimir (pila *p){       //Accion imprimir
     if (p == NULL){           //Comparo el puntero con NULL para ve si imprimo los datos
           printf ("\n LA PILA ESTA VACIA\n");
           }
     else {
          pila *aux;   //Creo el puntero
          aux = p;     //Tomo los datos del puntero y los almaceno en aux
          while (aux !=NULL){ //Comparo aux con NULL para ver si los imprimo
                printf ("  ->%g",aux->base);    //Imprimo los datos que tiene la base
                printf (";%g",aux->altura);    //Imprimo los datos que tiene la altura
                aux = aux-> prox;        //Posiciono el puntero en la proxima pila
          }//fin while
     }//fin else
}//fin void
