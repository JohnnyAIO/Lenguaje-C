
#include <stdio.h>
#include <math.h>
int main()
{
    int n, d, resto, i,invertido=0, e, f, x, s, r, contador, primo, bin, j=0, k, n_temp, n_tem=0, n_temp1=0, numero, x1, x2, opcion;
    float a, b, c;
    int num1, num2, num3;
    int number, originalNumber, remainder, result = 0, potencia;
do{
    printf("**************************************************************************************** \n");
    printf("                                       Menú Proyecto Nº 1 Tipo A                         \n");
    printf("                             Autores: Thais Mota y Derbys Figuera                        \n");
    printf("**************************************************************************************** \n");
    printf("1. Dado 2 nros enteros n y d, verificar si n es divisible entre d, para n <>0.           \n");
    printf("2. Calcular la ecuación cuadrática.                                                      \n");
    printf("3. Dado n de tipo entero, mostrar el número invertido.                                   \n");
    printf("4. Dado n entero positivo de 3 digitos, verificar si es numero armstrong                 \n");
    printf("5. Dado n de tipo entero, se pide contar y sumar sus dígitos.                            \n");
    printf("6. Dado n de tipo entero, se pide escribir los nros primos desde 1 hasta n               \n");
    printf("7. Dado n de tipo entero en base 10 convertirlo a binario, octal y hexádecimal           \n");
    printf("8. Salir.                                                                                \n");
    printf("**************************************************************************************** \n");
    printf("Ingrese su opcion:");
    scanf("%d", &opcion);

    /* Inicio del anidamiento */
    switch(opcion){
       case 1: //Dado 2 nros enteros n y d verifica si n es divisible entre d, para n<>0
                printf("Introduce el valor de n: ");
                scanf("%d", &n);

		printf("Introduce el valor de d: ");
                scanf("%d", &d);

		if (n<0 && d<0)
		printf ("los valores de n y d son invalidos");
		else{
		
		if (n % d==0)
		printf ( " n es divisible entre d ");
		else
		printf (" n no es divisible entre d ");
		}
			


          
                break;

        case 2: //Calcular la ecuacion cuadratica
                printf("Ingrese el valor de a: ");
                scanf("%f",&a);
                printf("Ingrese el valor de b: ");
                scanf("%f",&b);
                printf("Ingrese el valor de c: ");
                scanf("%f",&c);
                if(a==0)
                   printf("Debe ser diferente de 0, no se puede dividir entre 0");
                else{
                    d=b*b-4*a*c;
                   // printf("Valores a= %f, b= %f, c= %f", a,b,c);          
                    if(d<0)                 
                      printf(" Raiz imginaria ");                
                    else{
                        //x1=(-b+sqrt(d))/(2*a);
                        //x2=(-b-sqrt(d))/(2*a);
                        printf("x1= %d", x1);
                        printf("x2= %d", x2);
                    }//end-if
                }//end-if
                break;
        case 3: //Dado n de tipo entero, mostr el numero invertido
                printf("Ingrese el valor de n: ");
                scanf("%d",&n);
                printf("Nro invetido: ");
                while(n!=0){
                    resto=n%10;
                    n=n/10;
                    printf("%d",resto);
                }//end-while
                printf("\n");
                break;

        case 4: //Dado n entero positivo de 3 digitos, verificar si es numero armstrong
            

            printf("Introduzca tres numeros \n: ");
            scanf("%d", &number);

            originalNumber = number;

            while (originalNumber != 0)
            {
            remainder = originalNumber%10;
            potencia = remainder*remainder*remainder;
            result += potencia;
            originalNumber /= 10;
            }

    if(result == number){
      printf("%d es un Armstrong. \n",number);
    }else{
      printf("%d no es un Armstrong .\n",number);
    }
               break;

        case 5: //Dado n de tipo entero, se pide contar y sumar sus dígitos
               printf("ingrese el valor de n: ");
               scanf("%d", &n);
               int contadores=0;
               int acum = 0;
               while(n>0)
               {
               r=n%10;
               acum += r;
               n=n/10;
               contadores++;
               }
               printf("La suma del valor ingresado es:  %d\n", acum);
               printf("La cantidad de digitos es: %d\n", contadores);
               break;

         case 6: //Dado n de tipo entero, se pide escribir los nros primos desde 1 hasta n
               printf("ingrese el valor de n:  ");
		scanf("%d", &n);
		
		if (n<0)
		printf ("valor invalido");
		else
		{
		for(i=1;i<n;i++){
			printf ("i");
			}	

			}
		
               
               break;

         case 7: //Dado n de tipo entero en base 10 convertirlo a binario, octal y hexádecimal
               printf("ingrese el valor de n:");
               scanf("%d", &n);
              // printf("binario: \n ");
               //void conversion (int n)
		{
    char resp[100];
    int i,copia,num,tam;
    // A Binario
    copia=n;
    i=0;
    while(copia>0)
    {
        resp[i]=(char)(copia%2 + 48);//El codigo ASCII  del caracter 0 es 48
        copia=copia/2;
        i=i+1;
    }
    resp[i]='\0';
    /*Volteando
    i=0;
   // tam=strlen(resp);
    while(i<tam/2)
    {
        copia=resp[i];
        resp[i]=resp[tam-1-i];
        resp[tam-1-i]=copia;
        i=i+1;
    }*/
    printf("\n El numero en binario es: %s",resp);
    // A Octal
    copia=n;
    i=0;
    while(copia>0)
    {
        resp[i]=(char)(copia%8 + 48);//El codigo ASCII  del caracter 0 es 48
        copia=copia/8;
        i=i+1;
    }
    resp[i]='\0';
    /*Volteando
    i=0;
   // tam=strlen(resp);
    while(i<tam/2)
    {
        copia=resp[i];
        resp[i]=resp[tam-1-i];
        resp[tam-1-i]=copia;
        i=i+1;
    }*/
    printf("\n El numero en octal es: %s",resp);
    // A Hexadecimal
    copia=n;
    i=0;
    while(copia>0)
    {
        num=copia%16;
        if(num<10)
            resp[i]=(char)(num + 48);//El codigo ASCII  del caracter 0 es 48
        else
            resp[i]=(char)(num + 55);//El codigo ASCII  del caracter A es 65
        copia=copia/16;
        i=i+1;
    }
    resp[i]='\0';
    /*Volteando
    i=0;
    //tam=strlen(resp);
    while(i<tam/2)
    {
        copia=resp[i];
        resp[i]=resp[tam-1-i];
        resp[tam-1-i]=copia;
        i=i+1;
    }*/
    printf("\n El numero en hexadecimal es: %s",resp);
}

               break;
       case 8: //Salir
              printf("Ud ha salido del menu");
              break;

       default: printf("Opcion invalida");

     }/* Fin del anidamiento */
}while (opcion!=8);
}

