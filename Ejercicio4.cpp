#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;

struct Persona{
    int cedula[30];
    string nombre[30];
    int edad[30];
    char sexo[30];
};

int main(){
    FILE *archivo, *dir;
    int i = 0;
    archivo = fopen("personas.txt", "r");
    dir = fopen("direccion.txt", "w");
    Persona p;
    while(!feof(archivo)){
        fscanf(archivo, "%d", p.cedula[i]);
        fscanf(archivo, "%s", p.nombre[i]);
        fscanf(archivo, "%d", p.edad[i]);
        fscanf(archivo, "%c", p.sexo[i]);
        i++;
    }//end-file

    for(int k = 0; k < i; k++){
        fprintf(dir,"%d" ,p.cedula[k]);
        fprintf(dir, "%s",p.nombre[k]);
        fprintf(dir, "%d",p.edad[k]);
        fprintf(dir, "%c",p.sexo[k]);
    }
    return 0;
    fclose(archivo);
    fclose(dir);
}//end-main