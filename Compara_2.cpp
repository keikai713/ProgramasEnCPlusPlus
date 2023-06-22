/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Compara_2.
Descripción: Programa que pida 2 números y compare cuál es el mayor.
Fecha de inicio: 14/09/2015
Fecha de entrega: 14/09/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       int numero1;
       int numero2;       
       printf("Escribe el numero 1: ");
       scanf("%d", &numero1);
       printf("Escribe el numero 2: ");
       scanf("%d", &numero2);
       
       if(numero1 > numero2)
       printf("\nEl numero mayor es el primero");
       else
       if(numero2 > numero1)
       printf("\nEl numero mayor es el segundo");
       else
       if(numero1 == numero2)
       printf("\nLos 2 numeros son iguales");
       getch();
       }
