#include<stdio.h>
#include<math.h>

double esfera (double r) {

  scanf ("%lf", &r);

  double area;
  area = (4/3.0) * 3.14159 * pow(r, 3);
  printf("VOLUME = %.3lf\n", area);

  return 0;	
}

int main () {

  double raio;
  esfera(raio);

  return 0;
}