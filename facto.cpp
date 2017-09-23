#include<iostream>
#include<stdio.h>
using namespace std;
static int factorial (int n){
	int fact;
	if ( n == 0){
		fact = 1;
	}else{
		fact = factorial(n-1)*n;
	}//end-else
	return factorial;
}//end-factorial
