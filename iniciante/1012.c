#include<stdio.h>
#include<math.h>

float Atriangulo (double x, double y) {

  float triangulo = (x * y) /2;
  printf("TRIANGULO: %.3f\n", triangulo);

  return 0;
}

float Acirculo (double x) {

  float circulo = 3.14159 * pow(x, 2);
  printf("CIRCULO: %.3f\n", circulo);

  return 0;
}

float Atrapezio (double x, double y, double z) {

  float trapezio = ((x+y) * z) /2;
  printf("TRAPEZIO: %.3f\n", trapezio);

  return 0;
}

float Aquadrado (double x) {

  float quadrado = pow(x, 2);
  printf ("QUADRADO: %.3f\n", quadrado);

  return 0;
}

float Aretangulo (double x, double y) {

  float retangulo = x * y;
  printf ("RETANGULO: %.3f\n", retangulo);

  return 0;
}


int main () {

  double A, B, C;
  scanf("%lf %lf %lf", &A, &B, &C);

  Atriangulo(A, C);
  Acirculo(C);
  Atrapezio(A, B, C);
  Aquadrado(B);
  Aretangulo(A, B);

  return 0;
}