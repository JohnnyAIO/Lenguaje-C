#include <stdio.h>

int main (){
	int i, j;
	int Datos[4][4];
	Datos[0][0] = 0;
	Datos[0][1] = 0;
	Datos[0][2] = 0;
	Datos[0][3] = 0;
	Datos[0][4] = 0;
	Datos[1][0] = 0;
	Datos[1][1] = 0;
	Datos[1][2] = 1;
	Datos[1][3] = 2;
	Datos[1][4] = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
		printf("%d \t", Datos[i][j]); //Fila
		}
		printf("\n"); //Columna
	}
}
