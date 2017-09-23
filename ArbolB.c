#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo *der;
    struct nodo *izq;
};

typedef struct nodo _nodo;

_nodo *crear(int dato){
  _nodo *nuevo;
nuevo = (_nodo *)malloc(sizeof(_nodo));
nuevo -> dato = dato;
nuevo -> der = NULL;
nuevo -> izq = NULL;
return nuevo;
}//end-crear

_nodo *agregarder(_nodo *nuevo, _nodo *raiz){
    raiz->der = nuevo;
    return raiz;
}//end-agregar

_nodo *agregarizq(_nodo *nuevo, _nodo *raiz){
    raiz->izq = nuevo;
    return raiz;
}//end-agregar

void imprimir(_nodo *nodo){
    if(nodo != NULL){
        printf("%d\n", nodo -> dato);
    }else{
        printf("No contiene elementos o esta full\n");
    }//end-else
}//end-imprimir

void PreOrden(_nodo *raiz){
    if(raiz != NULL){
        imprimir(raiz);
        PreOrden(raiz -> izq);
        PreOrden(raiz -> der);
    }//end-if
}//end-preorden

void inOrden(_nodo *raiz){
    if(raiz != NULL){
        inOrden(raiz -> izq);
        imprimir(raiz);
        inOrden(raiz -> der);
    }//end-if
}//end-inOrden

void PostOrden(_nodo *raiz){
    if(raiz != NULL){
        PostOrden(raiz -> izq);
        PostOrden(raiz -> der);
        imprimir(raiz);
    }
}

main() {
    _nodo *raiz;
    raiz = crear(1); //                 1
    raiz -> izq = crear(2);//    2               3
    raiz -> der = crear(3);//   4           5           6
    raiz -> izq ->izq = crear(4);
    raiz -> izq -> der = crear(7);
    raiz -> der ->izq = crear(5);
    raiz -> der -> der = crear(6);
    printf("Preorden (R I D): \n");
    PreOrden(raiz);
    printf("In orden (I R D): \n");
    inOrden(raiz);
    printf("Post Orden (I D R): \n");
    PostOrden(raiz);
   
}

