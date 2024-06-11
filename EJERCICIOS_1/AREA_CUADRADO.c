#include <stdio.h>

/*
CARLA ALEJANDRA GARCIA GARCIA
V-32.774.005
INFORMATICA I, SECCION 2
*/

int main() {
  float lado;

  printf("Introduce la longitud de un lado del cuadrado: ");
  scanf("%f", &lado);

  float area = lado * lado;

  printf("\nEl area del cuadrado es: %.2f\n", area);

  return 0;
}