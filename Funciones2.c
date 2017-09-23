#include<stdio.h>

void primera () {
	printf("Acabaste de llamar a la primera funcion\n");
}

void segunda (){
	printf("Acabaste de llamar a la segunda funcion\n");
}

int main(){
	printf("La primera funcion desde main\n");
	primera();
	printf("La segunda funcion desde main\n");
	segunda();
	printf("Las funciones han finalizado\n");
	return 0;

}