#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int colas[MAX]; 
int frente = 0; 
int final = 0; 
int dato;
void insertar_cola(){
    if(final < MAX){
        final++;
        printf("Ingrese un dato\n");
        scanf("%d", &dato);
        colas[final] = dato;
    }//end-if
    if(final == 1){
        frente = 1;
    }else{
        if(final == MAX){
            printf("Desbordamiento\n");
        }else{
            printf("El dato: %d, se ha ingresado en la cola\n", dato);
        }//end-else
    }//end-else-frente
}//end-agregar

void eliminar_cola(){
    if(frente != 0){
        dato = colas[frente];
        if(frente == final){
            frente = 0;
            final = 0;
        }else{
            frente++;
        }//end-else
    }else{
        printf("Subordamiento\n");
    }//end-else
    printf("Se ha eliminado el dato: %d\n", dato);
}//end-eliminar
int main() {
    int opcion;
    do{
        printf("\n\n");
    printf("Colas - UBV\n");
    printf("1) Insertar elementos\n");
    printf("2) Eliminar elementos\n");
    printf("3) Salir de este programa\n");
    printf("Ingrese su opcion\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            insertar_cola();
            break;
        case 2:
            eliminar_cola();
            break;
        case 3:
            return;
    }//end-switch
    }while(opcion != 3);
    
}

