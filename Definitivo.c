#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
main (int argc, char*argv[]) {
	int n, tam, i, j, opcion, inf, sup, centro, cont, poscedula, posx;
	long int temp, cedulax;
	char apellidox;
	bool existe;
	tam = 100;
	printf("Bienvenidos al proyecto 2 de la seccion 01D - Algoritmo y Programacion\n");
	printf("Ingrese la cantidad de empleados\n");
	scanf("%d", &n);
	if ( n <= 0 || n > tam) {
		printf("Cantidad invalida\n");
	}else{
		long int arrcedula[tam];
		char arrapellido[tam][tam];
		for (i=0;i<n;i++) {
			printf("Ingrese el apellido[%d]\n", i);
			scanf("%s", arrapellido[i]);
			printf("Ingrese su cedula[%d]\n", i);
			scanf("%ld", arrcedula[i]);
		}//end-for
		for (i=0;i<n;i++) {
			printf("Apellido\n");
			printf("%s\n",arrapellido[i][i]);
			printf("Cedula\n");
			printf("%ld\n", arrcedula[i]);
		}//end-for
		printf("***************************************************************************************************************\n");
		printf("                                       Empresa UBV 3000 C.A                                                    \n");
		printf("***************************************************************************************************************\n");
		printf("                          Autores: Yeiry Rivera y Jonathan Torres                                              \n");
		printf("***************************************************************************************************************\n");
		printf("1) Leer arreglo arrapellido y arrcedula (validar las cédulas: 17000000 <cedula <100000000)\n");
		printf("2) Escribir arreglos arrapellido y arrcedula\n");
		printf("3) Dado un apellido, buscar e indicar nro de cédula y la posición donde se encuentra (aplicar búsqueda binaria)\n");
		printf("4) Dado un apellido, buscar y contar las veces que aparece\n");
		printf("5) Ordenar sus elementos de forma descendente por cedula (Aplicar método por intercambio)\n");
		printf("6) Dado un apellido y cedula, buscar por apellido y modificar su cedula\n");
		printf("7) Insertar apellido y cedula del empleado (arreglo debe estar ordenado)\n");
		printf("8) Eliminar apellido del empleado y su cedula\n");
		printf("9) Salir\n");
		printf("***************************************************************************************************************\n");
		printf("Ingrese su opcion\n");
		scanf("%d", &opcion);
		switch (opcion) {
			case 1: /* 1) Leer arreglo arrapellido y arrcedula (validar las cédulas: 17000000 <cedula <100000000) */
			i=0;
			while (i < n) {
				if (170000000 <= arrcedula[i] || arrcedula[i] > 1000000000) {
					printf("Cantidad invalida\n");
				} else {
					printf("%ld\n", arrcedula[i]);
					i++;
				}//end-if
				}//end-while
				break;
			case 2: /* 2) Escribir arreglos arrapellido y arrcedula */
			for (i=0;i<n;i++) {
			printf("Escribiendo Apellido\n");
			printf("%s\n", arrapellido[i][i]);
			printf("Escribiendo Cedula\n");
			printf("%ld\n", arrcedula[i]);
			}//end-for
			break;
			case 3: /* 3) Dado un apellido, buscar e indicar nro de cédula y la posición donde se encuentra (aplicar búsqueda binaria) */
			printf("Ingrese el apellido a buscar");
			scanf("%s", &apellidox);
			inf=0;
			sup=n-1;
			existe='F';
			while (existe=='F' && inf<=sup) {
			centro=(inf+sup)/2;
			if (apellidox==arrapellido[centro][centro]) {
				existe='V';
			}else {
				if (apellidox < arrapellido[centro][centro]) {
					sup=centro-1;
				} else {
					inf=centro+1;
				}//end-if
			}//end-if
			}//end-while
			if (existe=='V') {
				printf("El apellido se encuentra en la posicion:%d\n\n", (centro+1));
			}else{
				printf("El dato no se encuentra\n\n");
			}//end-if
			break;
			case 4:/* 4) Dado un apellido, buscar y contar las veces que aparece */
			printf("Ingrese el apellido a buscar\n");
			scanf("%s", &apellidox);
			cont = 0;
			for (i=0;i<n;i++) {
			if (apellidox == arrapellido[i][i]) {
				cont++;
			}//end-if
			}//end-for
			printf("El apellido %s\t", apellidox, "se encuentra %d\t", cont, "veces");
			break;
			case 5: /* 5) Ordenar sus elementos de forma descendente por cedula (Aplicar método por intercambio) */
			for (i=0;i<n-1;i++) {
				for (j=i+1;j<n;j++) {
					if (arrcedula[i] > arrcedula[j]) {
						temp = arrcedula[i];
						arrcedula[i] = arrcedula[j];
						arrcedula[j] = temp;
					}//end-if
				}//end-for
			}//end-for
			printf("Escribiendo cedula por metodo de intercambio\n");
			for (i=0;i<n;i++) {
				printf("%ld\n", arrcedula[i]);
			}//end-for
			break;
			case 6:/* 6) Dado un apellido y cedula, buscar por apellido y modificar su cedula */
			printf("Ingrese el apellido\n");
			scanf("%s", &apellidox);
			printf("Ingrese su cedula\n");
			scanf("%ld", &cedulax);
			existe = 'F';
			for (i=0;i<n;i++) {
				if(apellidox == arrapellido[i][i] && cedulax == arrcedula[i]) {
					existe = 'V';
					poscedula = i;
					break;
				}//end-if
			}//end-for
			if (existe=='V') {
				printf("Ingrese su nueva cedula\n");
				scanf("&ld", cedulax);
				arrcedula[poscedula] = cedulax;
			} else {
				printf("Lo sentimos el apellido %s\t", apellidox, "no se encuentra en el arreglo D:\t");
			}//end-if
			for (i=0;i<n;i++) {
				printf("Escribiendo el apellido\n");
				printf("%s\n", arrapellido[i][i]);
				printf("Escribiendo la cedula\n");
				printf("%ld\n", arrcedula[i]);
			}//end-for
			break;
			case 7: /* 7) Insertar apellido y cedula del empleado (arreglo debe estar ordenado) */
			for (i=0;i<n-1;i++) {
				for (j=i+1;j<n;i++) {
					if (arrapellido[i][i] > arrapellido[j][j]) {
						temp = arrapellido[i][i];
						arrapellido[i][i] = arrapellido[j][j];
						arrapellido[j][j] = temp;
					}//end-if
				}//end-for
			}//end-for
			for (i=0;i<n-1;i++) {
				for (j=i+1;j<n;j++) {
					if (arrcedula[i] > arrcedula[j]) {
						temp = arrcedula[i];
						arrcedula[i] = arrcedula[j];
						arrcedula[j] = temp;
					}//end-if
				}//end-for
			}//end-for
			printf("Ingrese el apellido\n");
			scanf("%s", &apellidox);
			printf("Ingrese su cedula\n");
			scanf("%ld", &cedulax);
			existe = 'F';
			for (i=0;i<n;i++) {
				if (apellidox == arrapellido[i][i] && cedulax == arrcedula[i]) {
					existe = 'V';
				}//end-if
			}//end-for
			if (existe == 'V') {
				printf("Lo sentimos el apellido o cedula existen en el arreglo\n");
			} else {
				//Caso 1: Insertar al inicio
				if (cedulax < arrcedula[0]) {
					for (i=n-1;i<=0;i--) {
						arrapellido[i+1][i+1] = arrapellido[i][i];
						arrcedula[i+1] = arrcedula[i];
					}//end-for
					arrapellido[0][0] = apellidox;
					arrcedula[0] = cedulax;
					n++;
				} else {
					//Caso 2: Insertar al final
					if (cedulax > arrcedula[n]) {
						arrcedula[n+1] = cedulax;
						arrapellido[n+1][n+1] = apellidox;
						n++;
					} else {
						//Caso 3: Insertar al medio
						posx = -1;
						for (i=0;i<n;i++) {
							if (cedulax < arrcedula[i]) {
								posx = i;
								break;
							}//end-if
						}//end-for
						for (i=n-1;i>=posx;i--) {
							arrcedula[i+1] = arrcedula[i];
							arrapellido[i+1][i+1] = arrapellido[i];
						}//end-for
						arrcedula[posx] = cedulax;
						arrapellido[posx][posx] = apellidox;
						n++;
					}//end-if
					}//end-if
				}//end-if
			printf("Escribiendo el arreglo insertado\n");
			for (i=0;i<n;i++) {
				printf("%s\n", arrapellido[i][i]);
				printf("%ld\n", arrcedula[i]);
			}//end-for
			break;
			case 8: /* 8) Eliminar apellido del empleado y su cedula */
			printf("Ingrese el apellido\n");
			scanf("%s", &apellidox);
			printf("Ingrese su cedula\n");
			scanf("%ld", &cedulax);
			existe = 'F';
			for (i=0;i<n;i++) {
				if (apellidox == arrapellido[i][i] && cedulax == arrcedula[i]) {
					existe = 'V';
					posx = i;
					break;
				}//end-if
			}//end-for
			if (existe == 'V') {
				for (i=n-1;i<=posx;i++) {
					arrapellido[i+1][i+1] = arrapellido[i];
					arrcedula[i+1] = arrcedula[i];
				}//end-for
				n=n-1;
			} else {
				printf("El dato no se encuentra en el arreglo\n");
			}//end-if
			for (i=0;i<n;i++) {
				printf("Escribiendo el arreglo en si\n");
				printf("%s\n", arrapellido[i][i]);
				printf("%ld\n", arrcedula[i]);
			}//end-for
			break;
			case 9:/* 9) Salir */
			printf("Usted a salido del programa, muchas gracias por usarnos vuelva el proximo semestre xD\n");		
			}//end-opcion
	}//end-if
	}//end
