#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char** argv) {
    int n, m, o, i, j, k, tam;
    float suma, promedio;
    bool bandera;
    tam = 100;
    bandera = false;
    do{
        printf("Ingrese la cantidad de articulos\n");
        scanf("%d", &n);
        if ( n <= 0 || n > tam){
            printf("Cantidad invalida, intentalo otra vez\n");
        }else{
            bandera = true;
        }//end-else
    }while (bandera = false);
    bandera = false;
        do{
            printf("Ingrese la cantidad de precios\n");
            scanf("%d", &m);
            if (m <= 0 || m > tam){
                printf("Cantidad invalida, intentalo otra vez\n");
            }else{
                bandera = true;
            }//end-else
        }while (bandera = false);
        bandera = false;
        do{
            printf("Ingrese la cantidad de codigos\n");
            scanf("%d", &o);
            if (o <= 0 || o > tam){
                printf("Cantidad invalida, intentalo otra vez\n");
            }else{
                bandera = true;
            }//end-else
        }while (bandera = false);
	i = 0; j = 0; k = 0;
        float articulo_codigo_precio[tam][tam][tam];
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                for (k=0;k<o;k++){
                    printf("Ingrese los datos de la compra [%d][%d][%d]\n",i,j,k);
                    scanf("%f", &articulo_codigo_precio[i][j][k]);
                    if (articulo_codigo_precio[i][j][k] <= 0 || articulo_codigo_precio[i][j][k] > 10000000){
                        printf("Numero invalido\n");
                    }//end-else
                    }//end-for
                }//end-for
            }//end-for
        suma = 0;
	i = 0; j = 0; k = 0;
	for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                for (k=0;k<o;k++){
                     printf("%.2f\t",articulo_codigo_precio[i][j][k]);
                }//end-for
	printf("\n");
            }//end-for
	printf("\n");
        }//end-for
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                for (k=0;k<o;k++){
                     suma = suma + articulo_codigo_precio[i][j][k];
                }//end-for
            }//end-for
        }//end-for
        promedio = suma/tam;
        printf("El promedio es: %.2f\n", promedio);
        }//end-main

