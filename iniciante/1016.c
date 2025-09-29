#include<stdio.h>
#include<math.h>

int distancia (int km) {
  scanf("%d", &km);

  int resultado = 2 * km;
  printf ("%d minutos\n", resultado);

  return 0;
}

int main () {
  int tempo;
  distancia (tempo);

  return 0;
}