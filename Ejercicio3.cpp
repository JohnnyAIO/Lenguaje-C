#include <stdio.h>
#include <fstream>
using namespace std;

int main(){
    FILE *archivo;
    int i = 0;
    archivo = fopen("letras.txt", "r");
    char letra[100];
    while(!feof(archivo)){
        fscanf(archivo, "%s", letra);
        i++;
    }//end-while
    for(int j = 0; j < i; j++){
        printf("%s\n", letra);
    }
    return 0;
}//end-amin