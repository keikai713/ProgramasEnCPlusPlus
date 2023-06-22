/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Compara.
Descripción: Programa que pida un número y revise si es mayor a 100.
Fecha de inicio: 14/09/2015
Fecha de entrega: 14/09/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       int numero;
       printf("Escribe un numero: ");
       scanf("%d",&numero);
       if(numero > 100)
       printf("El numero es mayor a 100");
       else
       printf("El numero no es mayor a 100");
       getch();
       }
