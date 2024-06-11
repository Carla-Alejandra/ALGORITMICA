#include <stdio.h>

/*
CARLA ALEJANDRA GARCIA GARCIA
V-32.774.005
INFORMATICA I, SECCION 2
*/

int main() {
  double temperatura;
  char unidad;

  printf("Ingresa el valor de la temperatura : ");
  scanf("%lf", &temperatura);

  printf("\n(C para Celsius, F para Fahrenheit): ");
  scanf(" %c", &unidad);

  if (unidad == 'C' || unidad == 'c') {
    double fahrenheit = (temperatura * 9.0 / 5.0) + 32.0;
    printf("\n%.2lf Celsius es igual a %.2lf Fahrenheit\n", temperatura, fahrenheit);
  } else if (unidad == 'F' || unidad == 'f') {
    double celsius = (temperatura - 32.0) * 5.0 / 9.0;
    printf("\n%.2lf Fahrenheit es igual a %.2lf Celsius\n", temperatura, celsius);
  } else {
    printf("Ingresaste una unidad inválida.\n");
  }

  return 0;
}