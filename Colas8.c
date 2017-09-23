#include <stdlib.h>
#include <stdio.h>

typedef struct _nodo {
   int valor;
   struct _nodo *siguiente;
} tipoNodo;

typedef tipoNodo *pNodo;

/* Funciones con colas: */
void Anadir(pNodo *primero, pNodo *ultimo, int v);
int Leer(pNodo *primero, pNodo *ultimo);
int Eliminar(pNodo *primero, pNodo *ultimo);
 
int main()
{
   pNodo primero = NULL, ultimo = NULL;
   int n, j, i, opcion;
   do{
   printf("____________________________________________\n");
   printf("Implementacion de Colas - Jonathan Torres \n");
   printf("1) Ingresar Elementos \n");
   printf("2) Leer Elementos \n");
   printf("3) Eliminar \n");
   printf("4) Salir\n");
   printf("____________________________________________\n");
   printf("Ingrese su opcion\n");
   printf("_____________________________________________\n");
   scanf("%d", &opcion);
   switch(opcion){
       case 1:   
        printf("Ingrese la cantidad de numeros a ingresar \n");
        scanf("%d", &j);
        for(i = 1; i<=j;i++){
        printf("Ingrese un numero \n");
        scanf("%d", &n);
        Anadir(&primero, &ultimo, n);
        printf("Añadir(%d)\n", n);
   }//end-if
        break;
       case 2:
         printf("Contenido de la Cola \n");
         printf("%d\n", Leer(&primero, &ultimo));
        break;
       case 3:
           Eliminar(&primero, &ultimo);
           break;
       case 4:
           return;
   }//end-switch
   }while(opcion != 4);
}//end-programa

void Anadir(pNodo *primero, pNodo *ultimo, int v)
{
   pNodo nuevo;
 
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v;
   nuevo->siguiente = NULL;
   if(*ultimo) (*ultimo)->siguiente = nuevo;
   *ultimo = nuevo;
   if(!*primero) *primero = nuevo;
}

int Leer(pNodo *primero, pNodo *ultimo)
{
   pNodo nodo;      
   nodo = *primero;
   while(nodo != NULL){
       printf("%d\n",nodo -> valor);
       nodo = nodo -> siguiente;
   }//end-while
   printf("\n");
}

int Eliminar(pNodo *primero, pNodo *ultimo){
    pNodo nodo, q;
    nodo = *primero;
    q = *ultimo;
    int v;
    if(nodo == NULL || q == NULL){
        printf("La cola esta vacia \n");
    }else{
        *primero = nodo->siguiente;
        v = nodo->valor; 
        free(nodo);
        printf("El valor %d ha sido eliminado \n", v);
    }//end-else
    
}