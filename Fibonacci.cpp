#include<iostream>
#include<stdio.h>
using namespace std;

int fibonacci(int i){
	if (i==0){
		return 0;
	}//end-if
	if (i == 1){
		return 1;
	}//end-if
	return  fibonacci(i-1) + fibonacci(i-2);
}//end-fibonacci

int main (int argc, char**argv){
	int i,n;
	cout << "Ingrese el numero de serie de Fibonacci\n";
	cin >> n;
	if (n <= 0){
		cout << "Numero invalido";
	}else{
		for ( i=0;i<=n;i++){
			cout << "%d\t\n" << fibonacci(i);
		}//end-for
	}//end-else
}//end-inicio
