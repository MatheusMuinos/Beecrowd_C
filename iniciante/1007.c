#include<stdio.h>
#include<math.h>

void produto (int *R1, int *R2) {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d); 

  *R1 = a * b;
  *R2 = c * d;
}

void subtracao (int x, int y) {
  int z;
  z = x - y;

  printf ("DIFERENCA = %d\n", z);
}

int main () {
  int r1, r2;
  produto(&r1, &r2);
  subtracao (r1, r2);

  return 0;
}