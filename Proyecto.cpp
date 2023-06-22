/*
Autor: Alejandro Pérez Durán.
Nombre del programa: Proyecto.
Descripción: Programa que representa un proyecto de una empresa, el cual registra y consulta los empleados y productos.
Fecha de inicio: 19/10/2015
Fecha de entrega: 05/11/2015
*/

#include<stdio.h>
#include<conio.h>

int num_Empleado[100];
char nom_Empleado[100][30];
char ape_Empleado[100][30];
int ofic_Empleado[100];
int edad_Empleado[100];
char puesto_Empleado[100][30];
int x = 0;//Contador de posiciones de arreglos.

void registar_Empleados() {
           printf("\nEMPLEADO %d :", (x + 1));
           printf("\n-----------------------------------\n");
           printf("Escribe el numero (ID): ");
           scanf("%d", &num_Empleado[x]);
           printf("Escribe el nombre: ");
           scanf("%s", &nom_Empleado[x]);
           printf("Escribe el apellido: ");
           scanf("%s", &ape_Empleado[x]);
           printf("Escribe el numero de oficina: ");
           scanf("%d", &ofic_Empleado[x]);
           printf("Escribe la edad: ");
           scanf("%d", &edad_Empleado[x]);
           printf("Escribe el puesto: ");
           scanf("%s", &puesto_Empleado[x]);
           x++;
     }
     
void consultar_Empleados(int id) {
     bool encontrado = false;
     int j;//Posición de valores a mostrar de arreglo
     int x = 0;
     while((encontrado == false) && (x < 100)) {
             if(id == num_Empleado[x]) {
                   encontrado = true;
                   j = x;
                   }
             x++;
           }
           if(encontrado == true) {
                         printf("\n[EMPLEADO ENCONTRADO]\n");
                         printf("EMPLEADO %d :", (j + 1));
                         printf("\n===================================");
                         printf("\nNUMERO: %d", num_Empleado[j]);
                         printf("\nNOMBRE: %s", nom_Empleado[j]);
                         printf("\nAPELLIDO: %s", ape_Empleado[j]);
                         printf("\nOFICINA: %d", ofic_Empleado[j]);
                         printf("\nEDAD: %d", edad_Empleado[j]);
                         printf("\nPUESTO: %s", puesto_Empleado[j]);
                  } else {
                         printf("\n[EL EMPLEADO BUSCADO NO EXISTE]");
                         }
                  printf("\n");
     }
     
void menu_Empleados() {
     int opc;
      do {
          printf("\nEMPLEADOS\n");
          printf("1- Consultar\n");
          printf("2- Registar\n");
          printf("3- Menu principal\n");
          printf("\nSelecciona una opcion: ");
          scanf("%d",&opc);
           
           switch(opc) {
                       case 1:
                            int num_Empleado;
                            printf("\nEscribe el numero del empleado a consultar: ");
                            scanf("%d", &num_Empleado);
                            consultar_Empleados(num_Empleado);
                            break;
                       case 2:
                            registar_Empleados();
                            break;
                       case 3:
                            break;
                       default:
                               printf("\n[VALOR NO VALIDO]\n");
                               break;
                       }
          } while(opc != 3);
     }
     ////////////////////////////////////////////////////////////////////////////////////////////////////
     
int num_Producto[100];
char nom_Producto[100][30];
char des_Producto[100][30];
float prec_Producto[100];
int cant_Producto[100];
int p = 0;//Contador de posiciones de arreglos.

void registar_Productos() {
           printf("\nPRODUCTO %d :", (p + 1));
           printf("\n-----------------------------------\n");
           printf("Escribe el numero (ID): ");
           scanf("%d", &num_Producto[p]);
           printf("Escribe el nombre: ");
           scanf("%s", &nom_Producto[p]);
           printf("Escribe la descripcion: ");
           scanf("%s", &des_Producto[p]);
           printf("Escribe el precio: ");
           scanf("%f", &prec_Producto[p]);
           printf("Escribe la cantidad: ");
           scanf("%d", &cant_Producto[p]);
           p++;
     }
     
void consultar_Productos(int id) {
     bool encontrado = false;
     int j;//Posición de valores a mostrar de arreglo
     int x = 0;
     while((encontrado == false) && (x < 100)) {
             if(id == num_Producto[x]) {
                   encontrado = true;
                   j = x;
                   }
             x++;
           }
           if(encontrado == true) {
                         printf("\n[PRODUCTO ENCONTRADO]\n");
                         printf("PRODUCTO %d :", (j + 1));
                         printf("\n===================================");
                         printf("\nNUMERO: %d", num_Producto[j]);
                         printf("\nNOMBRE: %s", nom_Producto[j]);
                         printf("\nDESCRIPCION: %s", des_Producto[j]);
                         printf("\nPRECIO: %.2f", prec_Producto[j]);
                         printf("\nCANTIDAD: %d", cant_Producto[j]);
                  } else {
                         printf("\n[EL PRODUCTO BUSCADO NO EXISTE]");
                         }
                  printf("\n");
     }
     
void menu_Productos() {
     int opc;
      do {
          printf("\nPRODUCTOS\n");
          printf("1- Consultar\n");
          printf("2- Registar\n");
          printf("3- Menu principal\n");
          printf("\nSelecciona una opcion: ");
          scanf("%d",&opc);
           
           switch(opc) {
                       case 1:
                            int num_Producto;
                            printf("\nEscribe el numero del producto a consultar: ");
                            scanf("%d", &num_Producto);
                            consultar_Productos(num_Producto);
                            break;
                       case 2:
                            registar_Productos();
                            break;
                       case 3:
                            break;
                       default:
                               printf("\n[VALOR NO VALIDO]\n");
                               break;
                       }
          } while(opc != 3);
     }
     
main() {
       int opc;
       do {
           printf("\nNIVEUS\n");
           printf("\nMENU PRINCIPAL\n");
           printf("1- Empleados\n");
           printf("2- Productos\n");
           printf("3- Salir\n");
           printf("\nSelecciona una opcion: ");
           scanf("%d",&opc);
           
           switch(opc) {
                       case 1:
                            menu_Empleados();
                            break;
                       case 2:
                            menu_Productos();
                            break;
                       case 3:
                            printf("\n[FIN DEL PROGRAMA]\n");
                            break;
                       default:
                               printf("\n[VALOR NO VALIDO]\n");
                               break;
                       }
                       } while(opc != 3);
                       getch();
           }
