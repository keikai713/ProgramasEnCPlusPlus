#include <stdio.h>
#include <conio.h>

main()
{
      int a;
      a = 10;
      printf("El valor de a es: %d", a);
      //getch();//Esta instrucción necesita la librería "conio.h" para que funcione.
      //getchar();//Esta instrucción no necesita la librería "conio.h" para que funcione y hace lo mismo que la línea de arriba.
      float b = 1.101;
      printf("\n");
      printf("El valor de b es: %.2f", b);
      char c = 'A';
      printf("\n");
      printf("El valor de c es: %c", c);
      printf("\n");
      printf("Los valores de a y b es: %d, %f", a, b);
      //string d = "Hola mundo";
      //printf("\n");
      //printf("El valor de c es: %d", d);
      getch();
      }
