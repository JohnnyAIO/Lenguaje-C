#include <stdio.h>
const int Max_n = 100;
int main(){
FILE *p1, *p2;
  p1 = fopen("a.txt", "r");

  int a, count = 0;
  char palabra[Max_n];

  while(!feof(p1)){
    fscanf(p1, "%s", palabra);
    fscanf(p1, "%d", &a);
    printf("%s\n", palabra);
    count += a;
  }

  p2 = fopen("b.txt", "w");
  fprintf(p2, "%d", count);

  fclose(p1);
  fclose(p2);
  return 0;
}
