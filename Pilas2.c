
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 4
int pilas[MAX];
int tope;
bool bandera;
int dato;
int eliminar;

void vacia(){
    if(tope == 0){
        bandera = true;
        printf("No tiene elementos\n");
    }else{
        bandera = false; 
        printf("Tiene elementos\n");
    }//end-else
}//end-comprobante

void llenar(){
    if(tope == MAX){
       bandera = true;
       printf("La pila esta llena\n");
    }else{
        bandera = false;
        printf("La pila esta vacia\n");
    }//end-else
}//end-llenar

void Apilar(){
    llenar();
    if(bandera == true){
        printf("Desbordamiento\n");
    }else{
        printf("Ingrese un elemento\n");
        scanf("%d", &dato);
        tope++;
        pilas[tope] = dato;
    }//end-else
}//end-apilar

void Desapilar(){
    vacia();
    if (bandera = false){
        printf("Subdesbordamiento\n");
    }else{
        dato = pilas[tope];
        tope--;
    }
}//end-desapilar

void visualizar ()
  {
   system("cls");
   
	int i;
	
	if (tope == -1)
	{
		printf ("PILA VACIA\n");
		
	
	}
	else
	{
	  for (i = tope; i >= 0; i--)
		{
			printf (" %d\n", pilas[i]);
		}
	}
	printf ("\n");
  }//end-visualizar          
main() {
    int opcion;
    do{
    printf("_____________________\n");
    printf("Bienvenido a pilas - UBV\n");
    printf("1) Llenar Pila\n");
    printf("2) Eliminar Pila\n");
    printf("3) Visualizar pila\n");
    printf("4) Salir\n");
    printf("_____________________\n");
    printf("Ingrese su opcion\n");
    printf("_____________________\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            Apilar();
            break;
        case 2:
            Desapilar();
            break;
        case 3:
            visualizar();
            break; 
        case 4:
            return;
    }
    }while(opcion != 4);
    
}//end-programa

