#include <stdio.h>
#include <stdlib.h>
#define MAX 4
 int pila[MAX];
 int top;
 void apilar ();
 void desapilar();
 void visualizar ();
 main ()
 {
	int option;
	top = -1;
	do
	{
	    printf ("\n\n\n\n\n\n\n\n\n\n\n");
        printf ("********************\n");
		printf ("1.APILAR	         \n");
		printf ("2.DESAPILAR	     \n");
		printf ("3.VISUALIZAR	     \n");
		printf ("4.SALIR		     \n");
	    printf ("********************\n");
        printf ("\nElija opcion    ");
		scanf	("%d", &option);
		switch (option)
		{
			case 1: apilar();
				break;
			case 2:	desapilar();
				break;
			case 3:	visualizar();
				break;
			case 4:	return;
		}
   }while(option!=4);
 }                                                                                                                   
                                                                                                                                                                                                                         
  void apilar ()
  {
    system("cls");
    int num;
	 if (top == (MAX - 1))
      {
		printf ("PILA LLENA\n");
		
      }else{
		printf ("Introduzca elemento\n");
		scanf ("%d", &num);
		top = top + 1;
		pila[top] = num;
	   }

  }
  
void desapilar()
  {
    system("cls");
  
	if (top == - 1)
	{
		printf ("PILA VACIA\n");
	
	}else{
	
		printf ("ELEMENTO ELIMINADO  = %d\n", pila[top]);
		top = top - 1;
	}
	
  }

  void visualizar ()
  {
   system("cls");
   
	int i;
	
	if (top == -1)
	{
		printf ("PILA VACIA\n");
		
	
	}
	else
	{
	  for (i = top; i >= 0; i--)
		{
			printf (" %d\n", pila[i]);
		}
	}
	printf ("\n");
  }                      