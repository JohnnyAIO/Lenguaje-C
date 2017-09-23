#include<stdio.h>

int main(){
	cuadrado();
}
int cuadrado(){
	int contador;
	for (contador=1;contador<10;contador++){
		printf("Contador es: %d\n", contador);
		printf("%d\n", contador*contador);
	}
}