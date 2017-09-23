#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

main (){
int numero, n, m, o, i, j, k, tam;
double suma, promedio, precio;
char nombre;
bool bandera;
tam = 50;
bandera = "false";
//Para numero de los articulos
do{
printf("Ingrese la cantidad de articulos\n");
scanf("%d", &n);
if ( n <= 0 || n > tam){
printf("Cantidad invalida, intentalo otra vez\n");
}else{
bandera = "true";
}//end-if
}while (bandera == "true");
	//Para los nombres
	bandera = "false";
	do{
	printf("Ingrese la cantidad de nombres de articulos\n");
	scanf("%d", &m);
	if ( m <= 0 || m > tam){
	printf("Cantidad invalida, intentalo otra vez\n");
	}else{
	bandera = "true";
	}//end-if
	}while (bandera == "true");
		//Para los precios
		bandera = "false";
		do{
		printf("Ingrese la cantidad de precios de los articulos\n");
		scanf("%d", &o);
		if ( o <= 0 || o > tam){
		printf("Cantidad invalida, intentalo otra vez\n");
		}else{
		bandera = "true";
		}//end-if
		}while (bandera == "true");
float articulo_nombre_precio[i][j][k];
i = 0;
j = 0;
k = 0;
for (i=0;i<n;i++){
printf("Ingrese los numeros %d\n", i);
scanf("%d", &numero);
if (numero <= 0 || numero > n){
printf("Cantidad invalida, intentalo otra vez\n");
}else{
articulo_nombre_precio[i] = numero;
}//end-if
}//end-for
for (j=0;j<m;j++){
printf("Ingrese los nombres de los articulos %d\n", j);
scanf("%s", &nombre);
articulo_nombre_precio[j] = nombre;
}//end-if
}//end-for
for (k=0;k<o;k++){
printf("Ingrese los precios %d\n", k);
scanf("%f", &precio);
	if (precio <= 0 || precio > n){
	printf("Cantidad invalida, intentalo otra vez\n");
	}else{
		articulo_nombre_precio[k] = precio;
	}//end-else
}//end-for
suma = 0;
k = 0;
for (k=0;k<o;k++){
suma = suma+articulo_nombre_precio[k];
}//end-for
promedio = suma/o;
printf("EL promedio es: %g\n", promedio);

}//end-main
