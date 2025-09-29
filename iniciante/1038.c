#include<stdio.h>
#include<math.h>

float total (int produto, int quantidade) {

  float total;

  if (produto == 1) {
    total = 4 * quantidade;

  } else if (produto == 2) {
    total = 4.5 * quantidade;

  } else if (produto == 3) {
    total = 5 * quantidade;

  } else if (produto == 4) {
    total = 2 * quantidade;

  } else if (produto == 5) {
    total = 1.5 * quantidade;
  }
  return total;
}

int main () {

  int X, Y;
  scanf ("%d %d", &X, &Y);
  printf ("Total: R$ %.2f\n", total(X, Y));

  return 0;
}

