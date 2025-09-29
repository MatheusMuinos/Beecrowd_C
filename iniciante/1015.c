#include<stdio.h>
#include<math.h>

float distancia (double x1, double y1, double x2, double y2) {
  scanf ("%lf" "%lf", &x1, &y1);
  scanf ("%lf" "%lf", &x2, &y2);

  float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
  printf ("%.4f\n", distancia);

  return 0;
}

int main () {
  double x1, x2, y1, y2;
  distancia(x1, y1, x2, y2);

  return 0;
}