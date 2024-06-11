#include <stdio.h>

/*
CARLA ALEJANDRA GARCIA GARCIA
V-32.774.005
INFORMATICA I, SECCION 2
*/

int main(void) {
  float peso, altura, imc;

  printf("Introduce tu peso en kilogramos: ");
  scanf("%f", &peso);

  printf("\nIntroduce tu altura en metros(Usando el punto en vez de la coma): ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\nTu índice de masa corporal (IMC) es: %.2f\n", imc);

  return 0;
}