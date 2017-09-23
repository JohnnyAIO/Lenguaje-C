#include <stdio.h>

int factorial(int i){
	int fat;
	fat = factorial(i-1)*i;
	return fat;
}


int main(){
	int n, k;
	printf("Ingrese el valor a resolver el factorial\n");
	scanf("%d", &n);
	for(k=n;k>=1;k--){
		printf("El factorial de %d es = %d \n", n, factorial(k));
	}//end-for
}//end-main