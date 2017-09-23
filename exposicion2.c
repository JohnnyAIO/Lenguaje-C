#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main (int argc, char**argv[]) {
	int n, i, tam = 100;
	float promedio, suma;
	bool bandera;
	bandera = false;
	do{
	printf("Ingrese la cantidad de datos\n");
	scanf("%d", &n);
	if ( n <= 0 || n > tam){
		printf("Cantidad invalida\n");
	}else{
		bandera = true;
	}//end-else
	}while(bandera == false);
		long int numero_articulo[tam];
		char nombre_articulo[tam][tam];
		float precio_articulo[tam];
		i = 0;
		for (i=0;i<n;i++){
				printf("Ingrese el nombre del articulo %d\n", i);
				scanf("%s", &nombre_articulo[i][i]);
		}//end-for
		for (i=0;i<n;i++){
			printf("Ingrese el codigo de la compra %d\n", i);
			scanf("%ld", &numero_articulo[i]);
			if ( numero_articulo[i] <= 0 || numero_articulo[i] > 10000000) {
				printf("Cantidad invalida\n");
			}else{
				printf("Ingrese su precio %d\n", i);
				scanf("%f", &precio_articulo[i]);
				if (precio_articulo[i] <= 0 || precio_articulo[i] > 750000){
					printf("Precio invalido\n");
				}//end-if
			}//end-else
		}//end-for
		suma = 0;
		for (i=0;i<n;i++){
			suma = suma+precio_articulo[i];
		}//end-for
		promedio = suma/n;
		printf("EL promedio de los precios es: %.2f\n", promedio);
		i=0;
		for (i=0;i<n;i++){
			printf("%ld",numero_articulo[i]);
			printf("%s\t\t",nombre_articulo[i][i]);
			printf("%.2f\t\t\t",precio_articulo[i]);
		}//end-for
}//end-main
