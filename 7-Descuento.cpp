/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Descuento.
Descripción: Programa que el usuario escriba la cantidad de la venta y si la venta es mayor o igual a 500 se resta el 15 % si es menor a 500 se resta el 5 %.
Fecha de inicio: 21/09/2015
Fecha de entrega: 21/09/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       float venta, descuento, venta_total;
       printf("Escribe la cantidad de la venta: ");
       scanf("%f",&venta);
       
       if(venta >= 500) {
       descuento = venta * 0.15;
       venta_total = venta - descuento;
       } else
       if(venta < 500) {
       descuento = venta * 0.05;
       venta_total = venta - descuento;
       }
       printf("\nVENTA: %.2f", venta);
       printf("\nVENTA CON DESCUENTO: %.2f", venta_total);
       getch();
       }
