#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;

void binario(int n, int &a, int &b);
void hexadecimal(int f, int &c, int &d);
int esPrimo(int a, int &x);
int descriptar(int x1, int x2, int x3, int x4, int x5);

int main(){
	int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x_av, g, c, i = 0, x_gr, n;
	int total_x = 0, total_y = 0;
	char l[10];
	string ubicacion = "Este";
	scanf("%d", &c);
	if(c < 0 || c > 10){
		cout << "Numero invalido";
	}else{
		while(i < c){
	        scanf("%s %d", l, &n);
	        //Caso AV (Avanzar)
	        if(strcmp(l, "AV") == 0){
	        	binario(n, x1, x2);
		        hexadecimal(n, x3, x4);
		        esPrimo(n, x5);
		        x_av = descriptar(x1,x2,x3,x4,x5); //eje x
		        cout << "Valores de 1 :" << x1 << endl;
		        cout << "Valores de 0: "<<x2 << endl;
		        cout << "Valores de N16: "<<x3 << endl;
		        cout << "Letras de N16: " << x4 << endl;
		        cout << "Es primo: "<< x5 << endl;
		        cout << "Coordenadas: " << x_av << endl;
		        total_x += x_av; 
			}//fin-Avanzar
			
			if(strcmp(l, "GR") == 0){
				binario(n, x1, x2);		    
			    hexadecimal(n, x3, x4);
		        esPrimo(n, x5);
		        x_gr = descriptar(x1,x2,x3,x4,x5);
		        g = x_gr%3;
		        if(g < 0){
		    	    g = g*(-1);
			    }
		        if(g == 0){
		    	    ubicacion = "Sur";
		    	    total_y -= x_gr;
			    }
			    if(g == 1){
				    ubicacion = "Oeste";
				    total_x -= x_gr;
			    }
			    if(g == 2){
				    ubicacion = "Norte";
				    total_y += x_gr; 
			    }
		        cout << "Valores de 1 :" << x1 << endl;
		        cout << "Valores de 0: "<<x2 << endl;
		        cout << "Valores de N16: "<<x3 << endl;
		        cout << "Letras de N16: " << x4 << endl;
		        cout << "Es primo: "<< x5 << endl;
		        cout << "Coordenadas: " << x_gr << endl;
		        cout << "Grados: " << g << endl;
			}//fin - Girar
		    i++;
		}//end-while
}//end-else
	cout << "(" << total_x << "," << total_y << ")" << endl;
	cout << ubicacion << endl;
	return 0;

}//end-main

void binario(int n, int &a, int &b){
	int d;
	a = 0, b = 0;
	while(n > 0){
		d = n%2;
		if(d == 1){
			a++;
		}
		if(d == 0){
			b++;
		}
		n = n/2;
	}
}//end-binario


void hexadecimal(int f, int &c, int &d){ //En construccion
	c = 0; d = 0;
	int e;
	while(f > 0){
		e = f%16;
		if(e > 10){
			d++;
		}else{
			c++;
		}
		f = f/16;
	}
}//end-hexadecimal
int esPrimo(int a, int &x){
for(int cont = 2; cont < a; cont++){
if(a%cont == 0){
x = 1;
break;
}else{
x = 2;
}//end-if
}//end-for
return x;
}//end-bool

int descriptar(int x1, int x2, int x3, int x4, int x5){
	int producto = 1;
	int sumatoria = 0;
	for(int i = 1; i <= 1+(x1*x3); i++){
		for(int j = 1; j <= 1+x5; j++){
			producto = producto*((x2+x4)*(i+j));
		}
		sumatoria += producto*x5;
	}
	return sumatoria;
	
}//end-descriptar
