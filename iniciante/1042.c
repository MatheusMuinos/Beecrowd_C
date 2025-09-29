#include<stdio.h>

void comparar (int *a, int *b, int *c) {

  if ( *a > *b) {

    int temp = *a;
    *a = *b; // atribui o valor de b para a
    *b = temp;
  }

  if (*a > *c) {

    int temp = *a;
    *a = *c;
    *c = temp;
  }

  if (*b > *c) {

    int temp = *b;
    *b = *c;
    *c = temp;
  }
}

int main () {

  int a, b, c;
  scanf ("%d %d %d", &a, &b, &c);

  int original_a, original_b, original_c; // armazenar as posições iniciais em uma variavel, para printalas depois
  original_a = a;
  original_b = b;
  original_c = c;

  comparar(&a, &b, &c);
  printf ("%d\n%d\n%d\n", a, b, c);

  printf ("\n");

  printf("%d\n%d\n%d\n", original_a, original_b, original_c);

  return 0;
}
