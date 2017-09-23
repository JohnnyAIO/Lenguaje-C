#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int frente = 0, final = 0;
int dato;
int Colas[MAX];

int Insertar_colas(){
    int dato;
    if(final < MAX){
        printf("Introduzca el dato\n");
        scanf("%d", &dato);
        final += 1;
        Colas[final] = dato;
    }else{
            if(final == 1){
                frente = 1;
            }else{
                printf("Subordinamiento\n");
            }//end-else
        }//end-else
    }//end-funcion
int Eliminar_colas(){
 
    if(frente > 0 || frente < 0){
        dato = Colas[frente];
    }else{
    if(frente == final){
        frente = 0;
        final = 0;
    }else{
        frente += 1;    
    }//end-else
    }//end-else
}//end-Eliminar

int mostrar_cola(){
    int i;
    for (i = 0; i<MAX;i++){
        printf("%d\n", Colas[i]);
    }
}
       
int main() {
    int opcion;
    do{
    printf("Menu de colas\n");
    printf("1) Insertar colas\n");
    printf("2) Eliminar colas\n");
    printf("3) Mostrar colas\n");
    printf("Ingrese su opcion\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
            Insertar_colas();
            break;
        case 2:
                Eliminar_colas();
                break;
        case 3:
            mostrar_cola();
            break;
    }//end-switch
    
    }while(opcion!= 4);
}//end-main