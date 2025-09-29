    #include<stdio.h>
#include<math.h>

int media (double A, double B, double C) {

  scanf ("%lf", &A);
  scanf ("%lf", &B);
  scanf ("%lf", &C);

  double X;
  X = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);
  printf ("MEDIA = %.1lf\n", X);

  return 0;
}

int main () {
  double x, y, z;
  media (x, y, z);

  return 0;
}