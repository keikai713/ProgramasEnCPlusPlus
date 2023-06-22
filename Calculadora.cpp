/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Calculadora.
Descripción: Programa que realice suma, resta, multiplicación, división, raíz cuadrada, exponente, seno, coseno, tangente y factorial.
Fecha de inicio: 28/09/2015
Fecha de entrega: 30/09/2015
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
main() {
       int opc, cn;
       float total = 0, nuevon;
       do {
       printf("\nMENU\n");
       printf("1- Suma\n");
       printf("2- Resta\n");
       printf("3- Multiplicacion\n");
       printf("4- Division\n");
       printf("4- Division\n");
       printf("5- Raiz cuadrada\n");
       printf("6- Exponente\n");
       printf("7- Seno\n");
       printf("8- Coseno\n");
       printf("9- Tangente\n");
       printf("10- Factorial\n");
       printf("11- Salir\n");
       printf("\nSelecciona una opcion: ");
       scanf("%d",&opc);
       
       switch(opc) {
                        case 1:
                        printf("\n--------------SUMA");
                        printf("\nCuantos numeros sumara? ");
                        scanf("%d",&cn);
                        printf("\nEscribe todos los numeros que sumara:\n");
                        for(int x = 0; x < cn; x++) {
                                scanf("%f",&nuevon);
                                total += nuevon;
                                }
                        printf("\nSUMA TOTAL: %.2f", total);
                        total = 0;
                        break;
                        case 2:
                        printf("\n-------------RESTA");
                        float n1, n2;
                        printf("\nEscribe numero 1: ");
                        scanf("%f",&n1);
                        printf("\nEscribe numero 2: ");
                        scanf("%f",&n2);
                        total = n1 - n2;
                        printf("\nRESTA TOTAL: %.2f", total);
                        total = 0;
                        break;
                        case 3:
                        printf("\n--------------MULTIPLICACION");
                        printf("\nCuantos numeros sumara? ");
                        scanf("%d",&cn);
                        printf("\nEscribe todos los numeros que multiplicara:\n");
                        total = 1;
                        for(int x = 0; x < cn; x++) {
                                scanf("%f",&nuevon);
                                total *= nuevon;
                                }
                        printf("\nMULTIPLICACION TOTAL: %.2f", total);
                        total = 0;
                        break;
                        case 4:
                        float dividendo, divisor, totald;
                        printf("\n--------------DIVISION");
                        printf("\nEscribe el dividendo: ");
                        scanf("%f",&dividendo);
                        printf("\nEscribe el divisor: ");
                        scanf("%f",&divisor);
                        totald = dividendo / divisor;
                        printf("\nDIVISION TOTAL: %d", totald);
                        break;
                        case 5:
                        float nb, rc;
                        printf("\nEscribe el numero a elevar a sacar raiz cuadrada: ");
                        scanf("%f",&nb);
                        rc = sqrt(nb);
                        printf("\nRAIZ CUADRADA: %.2f", rc);
                        break;
                        case 6:
                        int exp;
                        float rs;
                        printf("\nEscribe el numero base: ");
                        scanf("%f",&nb);
                        printf("\nEscribe el numero exponente: ");
                        scanf("%d",&exp);
                        rs = pow(nb, exp);
                        printf("\nNUMERO ELEVADO: %.2f", rs);
                        break;
                        case 7:
                        printf("\nEscribe el numero para convertir a seno: ");
                        scanf("%f",&nb);
                        rs = sin(nb*M_PI/180);
                        printf("\nSENO: %f", rs);
                        break;
                        case 8:
                        printf("\nEscribe el numero para convertir a coseno: ");
                        scanf("%f",&nb);
                        rs = cos(nb*M_PI/180);
                        printf("\nCOSENO: %f", rs);
                        break;
                        case 9:
                        printf("\nEscribe el numero para convertir a tangente: ");
                        scanf("%f",&nb);
                        rs = tan(nb*M_PI/180);
                        printf("\nTANGENTE: %f", rs);
                        break;
                        case 10:
                        int n, f;
                        printf("\nEscribe el numero para convertir a factorial: ");
                        scanf("%d",&n);
                        f = n;
                        for(int x = (n - 1); x > 0; x--) {
                                f *= x;
                                }
                        printf("\nFACTORIAL: %d", f);
                        break;
                        case 11:
                        printf("\n[FIN DEL PROGRAMA]");
                        break;
                        default:
                        printf("\n[VALOR NO VALIDO]");
                        break;
                }
                } while(opc != 11);
       getch();
       }
