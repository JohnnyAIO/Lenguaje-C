#include<stdio.h>

main (){
	int n, i, suma;
	float promedio;
	printf("Ingrese la cantidad de estudiantes\n");
	scanf("%d", &n);
	if ( n <= 0 || n > 50){
	printf("Cantidad invalida\n");
	}else{
	char apellidos[n];
	int notas[n];
	i = 0;
	for (i=0;i<n;i++){
		printf("Ingrese el nombre%d\n", i);
		scanf("%s", &apellidos[i]);
		printf("Ingrese su nota%d\n", i);
		scanf("%d", &notas[i]);
		if ( notas[i] <= 0 || notas[i] > 20 ){
			printf("Cantidad invalida\n");
		}//fin-si
	}//fin-para
	suma = 0;
	i = 0;
	for (i=0;i<n;i++){
		suma = suma+notas[i];
	}//fin-para
	promedio = suma/n;
	i=0;
	for (i=0;i<n;i++){
		if (promedio == notas[i]){
			printf("El promedio esta justo cerca de:%d \n", i);
		}else{
			printf("No se encuentra ninguna nota cercana\n");
		}
	}//fin-para
	}//fin-else
}//fin-main