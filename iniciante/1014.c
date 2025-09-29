#include<stdio.h>
#include<math.h>

float consumo (int km, float litros) {
  scanf("%d", &km);
  scanf("%f", &litros);

  float consumo = km / litros;
  printf ("%.3f km/l\n", consumo);

  return 0;
}

int main () {
  int X;
  float Y;
  consumo (X, Y);

  return 0;
}