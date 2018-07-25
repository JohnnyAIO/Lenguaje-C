#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n<2)
        return 1;
    else
        return n * factorial(n-1);
}

int combinacion(int n, int r)
{
    if(r==1)
        return n;
    else
    {
        if(n==r)
            return 1;
        else
            return factorial(n) / (factorial(r) * factorial(n - r));
    }
}

int main()
{
    for(int i=0; i<=6; i++)
    {
        for(int ii=0; ii<=i; ii++)
            cout << combinacion(i, ii) << "  ";
        cout << endl;
    }
    return 0;
}
