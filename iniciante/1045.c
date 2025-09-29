#include<stdio.h>
#include<math.h>


void tipo_triangulo (double x, double y, double z) {

  if (x < y) {

    double temp;
    temp = x;
    x = y;
    y = temp;
  }

  if (x < z) {

    double temp;
    temp = x;
    x = z;
    z = temp;
  }

  if (x >= y + z) {
    printf ("NAO FORMA TRIANGULO\n");
    return;
  }

  double x2 = pow(x,2);
  double y2 = pow(y,2);
  double z2 = pow(z,2);

  if (x2 == y2 + z2) {
     printf ("TRIANGULO RETANGULO\n");

  } else if (x2 > y2 + z2) {
     printf ("TRIANGULO OBTUSANGULO\n");

  } else {
     printf ("TRIANGULO ACUTANGULO\n");
  } 

  if (x == y && y == z) {
     printf ("TRIANGULO EQUILATERO\n");

  } else if (x == y || x == z || y == z) {
     printf("TRIANGULO ISOSCELES\n");
  }

}

int main () {

  double A, B, C;
  scanf ("%lf %lf %lf", &A, &B, &C);

  if (A > 0 && B > 0 && C > 00) {
    tipo_triangulo(A, B, C);
  }
  return 0;
}