/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Par_Impar.
Descripción: Programa que el usuario escriba un número y verificar si es par o impar.
Fecha de inicio: 21/09/2015
Fecha de entrega: 21/09/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       int numero;
       printf("Escribe un numero: ");
       scanf("%d",&numero);
       
       if(numero % 2 == 0)
       printf("\nEl numero es par");
       else
       printf("\nEl numero es impar");
       getch();
       }
