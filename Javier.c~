#include<stdio.h>


main (){
    int n, m, i, j;
    char elem;
    printf("Ingrese la cantidad de filas\n");
    scanf("%d", &n);
    if (n <= 0){
        printf("Cantidad invalida\n");
    }else{
        printf("Ingrese la cantidad de columnas\n");
        scanf("%d", &m);
    }if (m <= 0){
        printf("Cantidad invalida\n");
    }else{
        char datos[n][m];
        for (i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("Ingrese lo vales [%d][%d]\n", i,j);
                scanf("%c", &elem);
                datos[i][j] = elem;
            }//end-for-columnas
        }//end-for-filas
        printf("Los datos recibidos\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%c", datos[i][j]);
            }//end-for
            printf("\n");
        }//end-for
    }//end-else
}//end-main
