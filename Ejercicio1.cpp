#include <iostream>
using namespace std;

bool esPar(int a);
void ImprimirRango(int a, int b);


int main(){

ImprimirRango(56,1235);

}


bool esPar(int a){
bool x = a%2 == 0;
return x;
}//end-esPar

void ImprimirRango(int a, int b){
for(int i = a; i <= b; i++){
if(esPar(i)){
cout << i << endl;
}//end-else

}//end-para

}//end-void

