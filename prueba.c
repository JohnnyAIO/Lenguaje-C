#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main (int argc, char*argv) {
	int n, m, o, i, j, k, tam, total;
	float suma, promedio;
	bool bandera;
	tam = 100;
	bandera = false;
	printf("Bienvenido al programa de precios multidimensional\n");
	printf("Seccion: 1201D, Autores: Jonathan Torres, Yeiry Rivera, Nino Palacios, Anthony Franklis, Genesis Scarlet\n");
	/*Introduciendo la cantidad de filas*/
	do{
		printf("Ingrese la cantidad de filas\n");
		scanf("%d", &n);
		if (n <= 0 || n > tam){
			printf("Cantidad invalida, intentalo otra vez\n");
		}else{
			bandera = true;
		}//end-else
	}while (bandera == false);
	bandera = false;
	/*Introduciendo cantidad de columnas*/
	do{
		printf("Ingrese la cantidad de columnas\n");
		scanf("%d", &m);
		if (m <= 0 || m > tam){
			printf("Cantidad invalida, intentalo otra vez\n");
		}else{
			bandera = true;
		}
	}while (bandera == false);
	bandera = false;
	/*Introduciendo la cantidad de profundidad*/
	do{
		printf("Ingrese la cantidad de profundidad\n");
		scanf("%d", &o);
		if (o <= 0 || o > tam){
			printf("Cantidad invalida, intentalo otra vez\n");
		}else{
			bandera = true;
		}//end-else
	}while (bandera == false);
	/*Declarando el arreglo en si*/
	float precios_ventas[tam][tam][tam];
	i = 0; j = 0; k = 0;
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			for(k = 0;k < o;k++){
				printf("Ingrese los precios [%d][%d][%d]\n", i,j,k);
				scanf("%g", &precios_ventas[i][j][k]);
				if (precios_ventas[i][j][k] <= 0 || precios_ventas[i][j][k] > 50000){
					printf("Precio invalido, intentalo otra vez\n");
				}//end-else
			}//end-for-profundidad
		}//end-for-columna
	}//end-for-fila
	printf("Escribiendo los precios obtenidos\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			for(k=0;k<o;k++){
				printf("%.2f\t", precios_ventas[i][j][k]);
			}//end-for-profundidad
			printf("\n");
		}//end-for-columna
		printf("\n");
	}//end-for-filas
	suma = 0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			for(k=0;k<o;k++){
				suma += precios_ventas[i][j][k];
			}//end-for-profundidad
		}//end-for-columna
	}//end-for-filas
	total = n*m*o;
	promedio = suma/total;
	printf("Total de cantidad de datos ingresados son: %d\n", total);
	printf("El promedio es: %f\n", promedio);
	printf("Muchas gracias por usar el programa, espero que descansen estas vacaciones :D \n");
	printf("PD: Espero sacar 20 en este programa xD \n");
}//end-main
