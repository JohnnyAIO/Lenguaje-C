
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    struct elemento* siguiente;
    char* nombre;
    }elemento;
    
elemento*ultimo = NULL;

void agregar(elemento*_elemento){
    if(ultimo == NULL){
        ultimo =_elemento;
    }else{
        _elemento -> siguiente = ultimo;
        ultimo = _elemento;
    }
}
elemento* extraer(){
    if(ultimo == NULL){
        return NULL;
    }
        elemento*elemento_retorno = ultimo;
        ultimo = elemento_retorno -> siguiente;
        return elemento_retorno;
}
    
int main() {
    elemento*uno = malloc(sizeof(elemento));
    elemento*dos = malloc(sizeof(elemento));
    elemento*tres = malloc(sizeof(elemento));
    
    uno -> nombre = "Como ser pato";
    dos -> nombre = "Porque Daddy Yankee es tukky";
    tres -> nombre = "Chupalo Carmelo";
    agregar(uno);
    agregar(dos);
    agregar(tres);
    
    elemento*i=extraer();
    while(i != NULL){
        printf("%s\n", i->nombre);
        i = extraer();
    }
      
    return 0;
}

