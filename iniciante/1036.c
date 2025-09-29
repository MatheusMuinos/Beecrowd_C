#include<stdio.h>
#include<math.h>


void Bhaskara (double a, double b, double c) {

  float delta = pow(b, 2) - 4 * a * c;

  if ((delta < 0) || (delta == 0) || (a == 0)) {
    printf ("Impossivel calcular\n");

  } else if (delta > 0) {
    double x1 = (-b + sqrt(delta)) / (2 * a);
  printf ("R1 = %.5lf\n", x1);

  double x2 = (-b - sqrt(delta)) / (2 * a);
  printf ("R2 = %.5lf\n", x2);
  }
}


int main () {

  double A, B, C;
  scanf ("%lf %lf %lf", &A, &B, &C);
  Bhaskara (A, B, C);
  return 0;
}