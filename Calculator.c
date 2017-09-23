#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){
    int i, total, opcion, tam, n, m, a, b, c, d;
    tam = 25;
    int arit[tam];
    do{
        printf("Bienvenido a la Calculadora Aritmetica - USB\n");
        printf("Desarrolador: Jonathan Torres\n");
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Multiplicar\n");
        printf("4) Dividir\n");
        printf("Ingrese su opcion\n");
        scanf("%d", &opcion);
        switch (opcion){
            case 1: //Sumar
                i = 0;
                total = 0;
                for (i=0;i<tam;i++){
                    printf("Ingrese los valores a sumar\n");
                    scanf("%d", &arit[i]);
                }//end-for
                for(i=0;i<tam;i++){
                    total += arit[i];
                }//end-for
                printf("El resultado de la suma es : %d\n", total);
                break;
            case 2: //Restar
                 printf("Ingrese el numero\n");
                scanf("%d", &n);
                printf("Ingrese el residuo\n");
                scanf("%d", &m);
                total = n-m;
                printf("El resultado de la resta es: %d\n", total);
                break;
            case 3: //Multiplicar
                printf("Ingrese el numero\n");
                scanf("%d", &a);
                printf("Ingrese el factor\n");
                scanf("%d", &b);
                total = a*b;
                printf("El resultado de multiplicacion es: %d\n", total);
                break;
            case 4: //Dividir
                printf("Ingrese el numero a dividir\n");
                scanf("%d", &c);
                printf("Ingrese el divisor\n");
                scanf("%d", &d);
                total = c/d;
                printf("El resultado de la division es: %d\n", total);
                break;
            case 5: //Salir
                printf("Usted ha salido de la calculadora estudiantil\n");
                printf("Espero que este admitido en la USB :D\n");
                break;
        }//end-switch
    }while(opcion == 5);
}//end-main

