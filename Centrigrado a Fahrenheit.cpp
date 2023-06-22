/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Convertir grados centígrados a grados fahrenheit.
Descripción: Programa que convierta grados centígrados a grados fahrenheit.
Fecha de inicio: 10/09/2015
Fecha de entrega: 13/09/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       float cent, fahr = 0;
       
       printf("Escribe los centigrados: ");
       scanf("%f", &cent);
       fahr = (cent * (1.8)) + 32;
       printf("\nCENTIGRADOS:  %.2f", cent);
       printf("\nFAHRENHEIT: %.2f", fahr);
       getch();
       }
