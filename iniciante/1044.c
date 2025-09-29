#include<stdio.h>
#include<math.h>

void multiplos (int a, int b) {

  if (b % a == 0 || a % b == 0) {
    printf ("Sao Multiplos\n");

  } else {
    printf ("Nao sao Multiplos\n");
  }
}

int main () {

  int A, B;
  scanf("%d %d", &A, &B);

  multiplos (A, B);

  return 0;
}