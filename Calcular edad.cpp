/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Calcular edad.
Descripción: Programa que calcule edad, pedir nombre (de 40 a 60 caracteres), pedir año actual, pedir año de nacimiento.
Fecha de inicio: 10/09/2015
Fecha de entrega: 13/09/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       char nombre [40];
       int anio_a;
       int anio_c;
       int edad;
       
       printf("Escribe tu nombre: ");
       scanf("%s",&nombre);
       printf("Escribe el anio actual: ");
       scanf("%d", &anio_a);
       printf("Escribe el anio de nacimiento: ");
       scanf("%d", &anio_c);
       printf("\n");
       edad = anio_a - anio_c;
       printf("\n|||||||||||||||||||||||||||||||||||||||||||||||\n");
       printf("DATOS:\n");
       printf("NOMBRE: %s", nombre);
       printf("\nEDAD: %d", edad);
       getch();
       }
