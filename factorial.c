#include<stdio.h>

int factorial(int n) {
int fact;
	if ( n == 0){
	printf("El valor de n es: (Validacion de datos) %d \n", n);
	fact = 1;
	}else{
		printf("El valor de n es: (Antes de aplicar factorial) %d \n", n);
		fact = factorial(n-1)*n;
		printf("Factorial de %d = %d\n", n, fact);
	}//end-else
	return fact;
}//end-factorial

int main(){
	int a;
	printf("Buenos dias ingrese el valor \n");
	scanf("%d",&a);
	printf("Factorial de %d es = %d (resultado final) \n", a, factorial(a));
	return 0;
}
