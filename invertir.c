//Sumar numeros-> 321
#include<stdio.h>

int invertir(int n){
	if (n < 10){
	return n;
	}else{
	return (n%10)+invertir(n/10);
	}//end-else
}//end-invertir

int main (){
	int a;
	printf("Ingrese el numero a invertir\n");
	scanf("%d", &a);
	printf("El numero en total es: %d\n", invertir(a));
}