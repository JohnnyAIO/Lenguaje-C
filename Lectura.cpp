#include <iostream>
#include <cstdio>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using namespace std;

int main() {
    int n;
    long l;
    char a;
    float s;
    double r;
    cin >> n >> l >> a >> s >> r;
    cout << n << endl;
    cout <<  l << endl;
    cout <<  a << endl;
    cout.precision(3);
    cout << fixed <<  s << endl;
    cout.precision(9);
    cout << fixed << r << endl;
    return 0;
}
