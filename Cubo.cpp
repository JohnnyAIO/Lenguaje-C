#include<stdio.h>
#include<iostream>

using namespace std;
int cuboPorValor (int n){
    return n*n*n;
}//end-cubo

int main(int argc, char** argv) {
    int numero = 5;
    cout << "El numero original es: " << numero << "\n";
    numero = cuboPorValor(numero);
    cout << "EL nuevo numero del valor es " << numero << "\n";
    return 0;
}

