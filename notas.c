#include <stdio.h>

main(){
	int i;
	float notas[5];
	for(i = 1; i<=5; i++){
	printf("Ingrese la nota %d\n", i);
	scanf("%f", &notas[i]);
	}
	for(i=1;i<=5;i++){
		printf("%.2f\n",notas[i]);
	}
}