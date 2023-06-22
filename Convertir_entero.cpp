/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Convertir_entero.
Descripción: Programa que convierta un número entero (decimal) a número binario, octal y hexadecimal.
Fecha de inicio: 15/10/2015
Fecha de entrega: 19/10/2015
*/
#include<stdio.h>
#include<conio.h>

main() {
       int opc;
       do {
          printf("\nMENU\n");
          printf("\nCONVERTIR NUMERO ENTERO A:\n");
          printf("1- Binario\n");
          printf("2- Octal\n");
          printf("3- Hexadecimal\n");
          printf("4- Salir\n");
          printf("\nSelecciona una opcion: ");
          scanf("%d",&opc);
       
       int entero, i = 0;
       switch(opc) {
                        case 1: 
                        printf("\n*****ENTERO A BINARIO*****]\n");
                        printf("\nEscribe un numero entero: ");
                        scanf("%d", &entero);
                        printf("\nNUMERO BINARIO: ");
                        //El tamaño del arreglo depende de la cantidad de números binarios que se puedan producir.
                        int bin[100];
                        
                        while(entero > 0) {//Cuando entero sea igual a cero significa que el proceso acabó.
                                bin[i] = entero % 2;//Se guardan los números binarios.
                                entero = entero / 2;//Dividir el número de nuevo.
                                i++;
                        }
                        for(int j = i - 1; j >= 0; j--) {//Mostrar arreglo al revés.
                                printf("%d", bin[j]);
                        }
                        printf("\n");
                        i = 0;
                        break;
                        
                        case 2:
                        int oct[100];     
                        printf("\n*****ENTERO A OCTAL*****]\n");
                        printf("\nEscribe un numero entero: ");
                        scanf("%d", &entero);
                        printf("\nNUMERO OCTAL: ");
                        while(entero > 0) {//Cuando entero sea igual a cero significa que el proceso acabó.
                                oct[i] = entero % 8;//Se guardan los números octales.
                                entero = entero / 8;//Dividir el número de nuevo.
                                i++;
                        }
                        for(int j = i - 1; j >= 0; j--) {//Mostrar arreglo al revés.
                                printf("%d", oct[j]);
                        }
                        printf("\n");
                        i = 0;
                        break;
                        
                        case 3:
                        char hex[100];
                        printf("\n*****ENTERO A HEXADECIMAL*****]\n");
                        printf("\nEscribe un numero entero: ");
                        scanf("%d", &entero);
                        printf("\nNUMERO HEXADECIMAL: ");
                        int n;
                        char c;
                        while(entero > 0) {//Cuando entero sea igual a cero significa que el proceso acabó.
                                n = entero % 16;//Se guardan los números hexadecimales en "n".
                                entero = entero / 16;//Dividir el número de nuevo.
                                
                                switch(n) {//Verificar valor correspondiente.
                                          case 0: c = '0';
                                          break; 
                                          case 1: c = '1';
                                          break;
                                          case 2: c = '2';
                                          break;
                                          case 3: c = '3';
                                          break;
                                          case 4: c = '4';
                                          break;
                                          case 5: c = '5';
                                          break;
                                          case 6: c = '6';
                                          break;
                                          case 7: c = '7';
                                          break;
                                          case 8: c = '8';
                                          break;
                                          case 9: c = '9';
                                          break;
                                          case 10: c = 'A';
                                          break;
                                          case 11: c = 'B';
                                          break;
                                          case 12: c = 'C';
                                          break;
                                          case 13: c = 'D';
                                          break;
                                          case 14: c = 'E';
                                          break;
                                          case 15: c = 'F';
                                          break;
                                          }
                                hex[i] = c;//Guardar número hexadecimal en arreglo.
                                i++;
                        }//fin while
                        for(int j = i - 1; j >= 0; j--) {//Mostrar arreglo al revés.
                                printf("%c", hex[j]);
                        }
                        printf("\n");
                        i = 0;
                        break;
                        
                        case 4:
                        printf("\n[FIN DEL PROGRAMA]\n");
                        break;
                        
                        default:
                        printf("\n[VALOR NO VALIDO]\n");
                        break;
                }
                } while(opc != 4);
       getch();
       }
