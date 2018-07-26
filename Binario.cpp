#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, d, nhex = 0, p = 0;
	cout << "Ingrese los numeros: ";
	cin >> n;
	while(n > 1){
		d = n%16;
		nhex = nhex + d*pow(16,p);
		p++;
		n = n/16;
	}
	cout << nhex << endl;
	return 0;
}
