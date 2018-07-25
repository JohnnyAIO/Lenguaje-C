#include <iostream>
using namespace std;


struct Punto{
    int z;
    int x;
    int y;
};

int main(){
    Punto p,q;
    p.z = 3;
    p.x = 2;
    p.y = 4;
    q.z = 1;
    q.x = -10;
    q.y = 3;
    int total1, total2, total3;
    total1 = (p.z - q.z)*(p.z - q.z);
    total2 = (p.y - q.y)*(p.y - q.y);
    total3 = (p.x - q.x)*(p.x - q.x);
    cout << total1 + total2 + total3 << endl;
    return 0;
    
}//end-main