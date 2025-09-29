#include<stdio.h>
#include<math.h>

double area(double R) {
  scanf ("%lf", &R);
  double A;
  A = 3.14159 * pow(R, 2);
  printf ("A=%.4lf\n", A);
  return 0;
}

int main () {
  double raio;
  area(raio);
  return 0;
}