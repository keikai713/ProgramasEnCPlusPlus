#include <stdio.h>
#include <conio.h>

main()
{
      int a;
      a = 10;
      printf("El valor de a es: %d", a);
      //getch();//Esta instrucci�n necesita la librer�a "conio.h" para que funcione.
      //getchar();//Esta instrucci�n no necesita la librer�a "conio.h" para que funcione y hace lo mismo que la l�nea de arriba.
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
