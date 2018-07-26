#include <iostream>
using namespace std;

int a = 1;
int X = 7;
void h(int x, int &y){
a = 2;
y = 3;
X = 9;
x = a;
}
int g(int &a, int b){
return a + b;
}
int f(int &a, int b){
a = 8;
h(3, a);
b = a * b;
return g(a,8);
}
int main(){
int b = 3;
int c = 6;
int x;
int y;
x = f(b, g(c,b));
h(b,a);
cout << "b (main): " << b << endl;
cout << "c (main): " << c << endl;
cout << "a (global): " << a << endl;
cout << "y (funcion): " << y << endl;
cout << "x (funcion): " << x << endl;
cout << "X (global): " << X << endl;
}
