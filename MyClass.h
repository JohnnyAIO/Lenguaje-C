//MyClass.h
#include <cstdio>

const int MAX = 100;

class MyClass{
private:
  int Arr[MAX];
  int TAM;
public:
  MyClass();
  void read(int n);
  int suma();
};
