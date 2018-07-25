#include <iostream>
#include <string>
using namespace std;

struct ventas{
    float precio[5];
    string producto[5];
    string codigo[5];
};


int main(){
    ventas v;
    string x;
    for(int i = 0; i < 5; i++){
        cin >> v.producto[i];
        cin >>  v.precio[i];
        cin >>  v.codigo[i];
    }//end-for

    for(int i = 0; i < 5; i++){
    cout << "Producto" << v.producto[i] << endl;
    cout << "Precio:" <<  v.precio[i] << endl;
    cout << "Codigo:" << v.codigo[i] << endl;
    cout << " " << endl;
    }//end-for
    cin >>  x;
    for(int i = 0; i < 5; i++){
        if(x == v.producto[i]){
        cout << "Producto: " << v.producto[i] << endl;
        cout << "Precio: " <<  v.precio[i] << endl;
        cout << "Codigo: " << v.codigo[i] << endl;
        cout << " " << endl;
            break;
        }//end-for
    }//end-for

    return 0;
}//end-main