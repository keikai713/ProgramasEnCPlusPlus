/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Suma arreglos.
Descripción: Programa que realice un arreglo bidimensional de 3x3 y el usuario ingrese datos.
Fecha de inicio: 05/10/2015
Fecha de entrega: 05/10/2015
*/
#include<stdio.h>
#include<conio.h>
main() {
       int a[3][3];
       int b[3][3];
       int c[3][3];
       
       for(int j = 0; j < 3; j++)
               for(int k = 0; k < 3; k++) {
                       printf("Escribe numero del arreglo a, en la posicion: a [%d][%d]: ", j, k);
                       scanf("%d", &a[j][k]);
               }
               
       printf("\n");
       
       for(int j = 0; j < 3; j++)
               for(int k = 0; k < 3; k++) {
                       printf("Escribe numero del arreglo b, en la posicion: b [%d][%d]: ", j, k);
                       scanf("%d", &b[j][k]);
               }
                       
       for(int j = 0; j < 3; j++)
               for(int k = 0; k < 3; k++) {
                       c[j][k] = a[j][k] + b[j][k];
               }
               
       printf("\nVALORES DEL ARREGLO A:\n");
       
       for(int j = 0; j < 3; j++){
               for(int k = 0; k < 3; k++) {
                       printf("[%d]\t", a[j][k]);
               }
       printf("\n");
       }
       
       printf("\nVALORES DEL ARREGLO B:\n");
       
       for(int j = 0; j < 3; j++){
               for(int k = 0; k < 3; k++) {
                       printf("[%d]\t", b[j][k]);
               }
       printf("\n");
       }
       
       printf("\nVALORES DEL ARREGLO C:\n");
       
       for(int j = 0; j < 3; j++){
               for(int k = 0; k < 3; k++) {
                       printf("[%d]\t", c[j][k]);
               }
       printf("\n");
       }
       getch();
       }
