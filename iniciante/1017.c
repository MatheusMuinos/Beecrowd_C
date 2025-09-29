#include<stdio.h>
#include<math.h>

void litragem (int tempo, int velocidade) {
  scanf("%d", &tempo);
  scanf("%d", &velocidade);

  float distancia = tempo * velocidade;

  int consumo = 12;

  float litros = distancia / consumo;
  printf ("%.3f\n", litros);
}

int main () {
  int x, y;
  litragem (x, y);

  return 0;
}