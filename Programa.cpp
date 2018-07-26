#include <stdio.h>
using namespace std;

struct Cuentas{
  int cedula[100];
  char nombre[100];
  int dinero[100];
};
Cuentas a;
int main(){
  Cuentas a;
  FILE *maestro, *transacciones, *salida;
  maestro = fopen("maestro.txt", "r");
  transacciones = fopen("transacciones.in", "r");
  salida = fopen("salida.txt", "w");
  int i = 0, n = 0;
  while(!maestro){
    fscanf(maestro, "%d", &a.cedula[i]);
    fscanf(maestro, "%c", &a.nombre[i]);
    fscanf(maestro, "%d", &a.dinero[i]);
    i++;
    n++;
  }//end-while
  int x;
  int restar, total = 0;
  for(i = 0; i <= n; i++){
    fscanf(transacciones, "%d", &x);
    fscanf(transacciones, "%d", &restar);
    printf("%d", x);
    if(x == a.cedula[i]){
      total = a.dinero[i];
    }//end-if
    while(x == a.cedula[i]){
      total += restar;
    }//end-while
    fprintf(salida, "%d\t", a.cedula[i]);
    fprintf(salida, "%c\t", a.nombre[i]);
    fprintf(salida, "%d\t", total);
    fprintf(salida, "\n");
  }//end-para
  fclose(maestro);
  fclose(transacciones);
  fclose(salida);
  return 0;

}//end-main
