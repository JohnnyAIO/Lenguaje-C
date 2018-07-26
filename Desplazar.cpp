#include <iostream>
using namespace std;

int main(){
	int d1, d2, d3, n, total = 0;
	cout << "Ingrese N: " ;
	cin >> n;
	if(n <= 0 || n >= 100000){
		cout << "Numero invalido";
	}else{
		d1 = n/1000;
		d2 = n%1000;
		total = d2*100 + d1;
		cout << "Numero invertido: " << total << endl;
	}
	return 0;
}
