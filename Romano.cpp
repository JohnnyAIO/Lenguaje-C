#include <iostream>
using namespace std;

int main(){
	int n, d,c, u, m;
	cout << "Ingrese un numero: ";
	cin >> n;
	if( n >= 1000){
		cout << "Numero invalido";
	}else{
		u = n%10; //Cuarto
	    n = n/10; 
	    d = n%10; //Tercera
	    n = n/10; 
	    c = n%10; // Segunda
	    n = n/10;
	    m = n%10; // Primera
		switch(c){
			case 1:
				cout << "C";
				break;
			case 2:
				cout << "CC";
				break;
			case 3:
				cout << "CCC";
				break;
			case 4:
				cout << "CD";
				break;
			case 5:
				cout << "D";
				break;
			case 6:
				cout << "DC";
				break;
			case 7:
				cout << "DCC";
				break;
			case 8:
				cout << "DCCC";
				break;
			case 9:
				cout << "CM";
				break;
		}
		if(m == 1){
			cout << "M";
		}
	    switch(d){
			case 1:
				cout << "X";
				break;
			case 2:
				cout << "XX";
				break;
			case 3:
				cout << "XXX";
				break;
			case 4:
				cout << "XL";
				break;
			case 5:
				cout << "L";
				break;
			case 6:
				cout << "LX";
				break;
			case 7:
				cout << "LXX";
				break;
			case 8:
				cout << "LXXX";
				break;
			case 9:
				cout << "XC";
				break;
		}
	    switch(u){
	    	case 1:
	    		cout << "I";
	    		break;
	    	case 2:
	    		cout << "II";
	    		break;
	    	case 3:
	    		cout << "III";
	    		break;
	    	case 4:
	    		cout << "IV";
	    		break;
	    	case 5:
	    		cout << "V";
	    		break;
	    	case 6:
	    		cout << "VI";
	    		break;
	    	case 7:
	    		cout << "VII";
	    		break;
	    	case 8:
	    		cout << "VIII";
	    		break;
	    	case 9:
	    		cout << "IX";
	    		break;
		}//end-switch
	}//end-programa
	return 0;
}//end-programa
