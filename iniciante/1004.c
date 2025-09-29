#include<stdio.h>
#include<math.h>

int produto (int x, int y) {
  scanf("%d", &x);
  scanf("%d", &y);

  int z;
  z = x * y;
  printf ("PROD = %d\n", z);

  return 0;
}

int main () {
  int a, b;
  produto(a,b);

  return 0;
}