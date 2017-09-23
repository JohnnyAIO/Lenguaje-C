#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
	int n, tam, x, posx, i, j, temp, elem;
	tam = 100;
	char bandera;
	printf("Ingrese la cantidad de numeros \n");
	scanf("%d", &n);
	if(n <= 0 || n > 20){
		printf("Cantidad invalida \n");
	}else{
		int Numero[tam];
		for(i = 0; i < n; i++){
			printf("Ingrese el numero %d \n", i);
			scanf("%d", &elem);
			Numero[i] = elem;
		}//fin-para
		printf("Escribiendo el arreglo \n");
		for(i=0;i<n;i++){
			printf("%d\n", Numero[i]);
		}//end-for

		for(i=0;i< n-1;i++){
			for(j=i+1;j<n;j++){
				if(Numero[i]>Numero[j]){
					temp = Numero[i];
					Numero[i] = Numero[j];
					Numero[j] = temp;
				}//end-if
			}//end-for
		}//end-for
		printf("Imprimiento los datos ordenados \n");
		for(i=0;i<n;i++){
			printf("%d\n", Numero[i]);
		}//end-for
		printf("Ingresa el elemento para agregar \n");
		scanf("%d", &x);
		bandera = 'F';
		for(i = 0;i<n;i++){
			if(x == Numero[i]){
				bandera = 'V';
				break;
			}//end-if
		}//end-for
		if(bandera == 'V'){
			printf("Lo siento el elemento existe \n");
		}else{
			if(x < Numero[0]){
				for(i = n-1; i>=0;i--){
					Numero[i+1] = Numero[i];
				}//end-for
				Numero[0] = x;
				n++;
			}else{
				if(x > Numero[n-1]){
					Numero[n] = x;
					n++;
				}else{
					posx = -1;
					for(i = 0; i<n;i++){
						if(x < Numero[i]){
							posx = i;
							break;
						}//end-fi
					}//end-for
					for(i = n; i>= posx; i--){
						Numero[i+1] = Numero[i];
					}//end-for
					Numero[posx] = x;
					n++;
				}//end-else
			}//end-else
		}//end-else
		printf("Imprimiento los datos ordenados \n");
		for(i=0;i<n;i++){
			printf("%d\n", Numero[i]);
		}//end-for
		int y, posy;
		char bandera;
		printf("Ingrese el elemento para Eliminar \n");
		scanf("%d", &y);
		bandera = 'V';
		for(i = 0; i < n; i++){
			if(y == Numero[i]){
				bandera = 'V';
				posy = i;
				break;
			}//end-if
		}//end-para
	if(bandera == 'V'){
		for(i = posy; i < n-1;i++){
			Numero[i] = Numero[i+1];
		}//end-for
		n--;
		printf("El elemento ha sido eliminado \n");
		printf("Imprimiento los datos ordenados \n");
		for(i=0;i<n;i++){
			printf("%d\n", Numero[i]);
		}//end-for
	}else{
		printf("Lo siento el elemento no esta en el arreglo \n");
	}//end-si
	}//end-si

}//fin-programa