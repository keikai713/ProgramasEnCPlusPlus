/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Bonificacion.
Descripción: Programa que sueldo mensual, ventas mensuales, sumar al sueldo el 5 % de las ventas e imprimir el total.
Fecha de inicio: 14/09/2015
Fecha de entrega: 14/09/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       int sueldo, sueldot, ventas, bonificacion;
       printf("Escribe el sueldo del mensual trabajador: ");
       scanf("%d",&sueldo);
       printf("Escribe las ventas mensuales del trabajador: ");
       scanf("%d",&ventas);
       
       bonificacion = ventas * 0.05;
       sueldot = sueldo + bonificacion;
       printf("\nBONIFICACION: ", bonificacion);
       printf("SUELDO TOTAL: ", sueldot);
       getch();
       }
