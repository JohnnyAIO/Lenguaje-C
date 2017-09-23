#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main (int argc, char** argv) {
	int n, m, o, i, j, k, tam;
	float suma, promedio, total;
	bool bandera;
	tam = 100;
	bandera = false;
	/*Introduciendo la cantidad de filas*/
	do{
		printf("Ingrese la cantidad de filas\n");
		scanf("%d", &n);
		if (n <= 0 || n > tam){
			printf("Cantidad invalida, intentalo otra vez\n")
		}else{
			bandera = true;
		}
	}while (bandera == false);
	bandera = false;
	/*Introduciendo cantidad de columnas*/
	do{
		printf("Ingrese la cantidad de columnas\n");
		scanf("%d", &m);
		if (m <= 0 || m > tam){
			printf("Cantidad invalida, intentalo otra vez\n")
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
			printf("Cantidad invalida, intentalo otra vez\n")
		}else{
			bandera = true;
		}
	}while (bandera == false);
	/*Declarando el arreglo en si*/
	float precios_ventas[tam][tam][tam];
	i = 0; j = 0; k = 0;
	while (i < n){
		while(j < m){
			while(k < o){
				printf("Ingrese los precios [%d][%d][%d]\n");
				scanf("%f", precios_ventas[i][j][k]);
				if (precios_ventas[i][j][k] <= 0 || precios_ventas[i][j][k] > 50000){
					printf("Precio invalido, intentalo otra vez\n");
				}else{
					k++;
				}//end-else
			}//end-while-profundidad
			j++;
		}//end-while-columna
		i++;
	}//end-while-fila
	printf("Escribiendo los precios obtenidos\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			for(k=0;k<o;k++){
				printf("%f\t", precios_ventas[i][j][k]);
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
	printf("Total de datos ingresados son: %d\n", total);
	printf("El promedio es: %f\n", promedio);
}//end-main