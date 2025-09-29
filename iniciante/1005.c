#include<stdio.h>
#include<math.h>

double media (double x, double y) {

  scanf("%lf", &x);
  scanf("%lf", &y);

  double z;
  z = ((3.5 * x) + (7.5 * y)) / (3.5 + 7.5);
  printf ("MEDIA = %.5lf\n", z);

  return 0;
}

int main () {
  double A, B;
  media(A, B);

  return 0;
}