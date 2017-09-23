#include<iostream>
#include<stdio.h>

using namespace std;

int main(int argc, char** argv) {
    int cien, cincuenta, total, d1, d2;
    cout << "Ingrese la cantidad de billetes de 100BS.F\n";
    cin >> cien;
    d1 = cien*100;
    cout << "Ingrese la cantidad de billetes de 50Bs.F\n";
    cin >> cincuenta;
    d2 = cincuenta*50;
    total = d1+d2;
    cout << "Total de 100 es: " << cien << "\n";
    cout << "Total de 50 es: " << cincuenta << "\n";
    cout << "Total de ingreso es: " << total << "\n";
    
}
