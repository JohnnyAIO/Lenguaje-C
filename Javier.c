#include <stdio.h>
#include <string.h>
main (){
	int n, m, i,j;
	char elem;
	n = 3;
	m = 3;
	i = 0;
	j = 0;
	char datos[n][m];
	while(i<n){
		while(j < m){
			printf("Ingrese los datos [%d][%d]\n", i,j);
			scanf("%s", &elem);
			if (elem  ==  "x" || elem  ==  "o"){
				datos[i][j] = elem;
				j++;
			}else{
				printf("Datos invalidos, intentalo otra vez\n");
			}//end-else
		}//end-while
		i++;
	}//end-while
	printf("Escribiendo los valores\n");
	i=0; j=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%c\t", datos[i][j]);
		}//end-for
		printf("\n");
	}//end-for
}//end-main