#include<stdio.h>

float encontrar(int num1, int num2){
	float promedio;
	printf("Valores: %d, %d\n", num1, num2);
	printf("El promedio es: %.2f\n", promedio);
	promedio=((num1+num2)/2);
	return promedio;
}

int main(){
	int a = 5, b = 8;
	float resultado;
	resultado=encontrar(a,b);
	printf("El promedio es: %.2f\n", resultado);
}