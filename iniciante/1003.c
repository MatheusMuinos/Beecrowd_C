#include <stdio.h>

int adicao (int X) {

  int A, B;
  scanf ("%d", &A);
  scanf ("%d", &B);
  X = A + B;
  printf ("SOMA = %d\n", X);
  
  return 0;
}

int main () {
  int SOMA;
  adicao(SOMA);

  return 0;
}