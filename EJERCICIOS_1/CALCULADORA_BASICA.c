#include <stdio.h>
#include <stdlib.h>

/*
CARLA ALEJANDRA GARCIA GARCIA
V-32.774.005
INFORMATICA I, SECCION 2
*/

int main() {
  int x, y;
  char operador;

  printf("---Calculadora básica---\n");
  printf("Ingrese el primer número: ");
  scanf("%d", &x);

  printf("\n\n+ = Sumar\n- = Restar\n* = Multiplicar\n/ = Dividir\n\nIngrese el operador: ");
  scanf(" %c", &operador);

  printf("Ingrese el segundo número: ");
  scanf("%d", &y);

  switch (operador) {
    case '+':
      printf("%d + %d = %d\n", x, y, x + y);
      break;

    case '-':
      printf("%d - %d = %d\n", x, y, x - y);
      break;

    case '*':
      printf("%d * %d = %d\n", x, y, x * y);
      break;

    case '/':
      if (y == 0) {
        printf("Cómo vas a dividir por cero, campeón.\n");
      } else {
        printf("%d / %d = %d\n", x, y, x / y);
      }
      break;

    default:
      printf("Operador inválido.\n");
      break;
  }
  return 0;
}