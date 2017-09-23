#include <stdio.h>
int main()
{
     int n, i, j, posx, tam, elem, x;
     char existe;
     tam=100;
     printf("\nEl valor maximo del arreglo es=100");
     printf("\nIngrese la cantidad de elementos: ");
     scanf("%d", &n);
     if(n<0 || n>tam){
        printf("\n Cantidad invalida");
     }else{
        int arrelem[tam];
        i=0;
     while(i<n){
        printf("\nIngrese el elemento %d: ", i+1);
        scanf("%d", &elem);
        arrelem[i]=elem;
        i++;
       }//end-while
     }//end-if
                 // arreglo completo
    printf("\n*****arreglo completado*****\n");
    for(i=0;i<n;i++){
        printf("%d\t", arrelem[i]);
        }//end-for
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arrelem[i]>arrelem[j]){
                x=arrelem[i];
                arrelem[i]=arrelem[j];
                arrelem[j]=x;
                 }//end-if
            }//end-for
    }//end-for
                //arreglo ordenado ascendientemente
    printf("\n*****arreglo ordenado ascendientemente*****\n");
    for(i=0;i<n;i++){
          printf("%d\t", arrelem[i]);
    }//enf-for
    existe='f';
    printf("\nIngrese el valor de x a buscar: ");
    scanf("%d", &x);
    for(i=0;i<n;i++){
        if(arrelem[i]==x){
        existe='v';
        posx=i;
        break;
         }//end-if
    }//end-for
    if(existe=='v'){
      printf("\nError, el elemento a insertar ya existe");
    }else{
    	if(x<arrelem[1]){  //caso 1: antes del 1ero
     for(i=0;i<n;i++){
     arrelem[i+1]=arrelem[i];
     }//end-for
     arrelem[1]=x;
     n=n+1;
     }else{
     	if(x>arrelem[n]){  //despues del ultimo
         n=n+1;
         arrelem[n]=x;
     else //caso 3: se encuentra dentro
     for(i=0;i<n;i++){
     if(x<arrelem[i]){
         posx=i;
         break;
         }//end-if
    }//end-for
     for(i=posx;i<n;i++){
        arrelem[i+1]=arrelem[i];
     }//end-for
       arrelem[posx]=x;
         n=n+1;
         break;
       }//end-if
     }//end-if
     }//end-if
     printf("\nEl valor fue agregado con exito");
                         //Escribiendo arreglo modificado
    for(i=0;i<n;i++){
       printf("%d\n", arrelem[i]);
       }//end-for
}//end
