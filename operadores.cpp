#include<stdio.h>
#include<conio.h>
main() {
       int a;
       int b;
       int res;
       
       printf("Escribe el numero 1: ");
       scanf("%d",&a);
       printf("Escribe el numero 2: ");
       scanf("%d",&b);
       
       printf("//////////////////////");
       printf("\nOPERADORES\n\n");
       res = a + b;
       printf("SUMA: %d", res);
       
       res = a - b;
       printf("\nRESTA: %d", res);
       
       res = a * b;
       printf("\nMULTIPLICACION: %d", res);
       
       float res_div;
       res_div = a / b;
       printf("\nDIVISION: %.2f", res_div);
       getch();
       }
