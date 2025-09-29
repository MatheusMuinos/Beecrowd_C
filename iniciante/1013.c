#include<stdio.h>
#include<math.h>

int maior (int x, int y, int z) {
  scanf ("%d" "%d" "%d", &x, &y, &z);

  if (x > y && x > z) {
    printf("%d eh o maior\n", x);
  } else if ( y > x && y > z) {
    printf("%d eh o maior\n", y);
  } else if ( z > x && z > y) {
    printf("%d eh o maior\n", z);
  }
  return 0;
}


int main() {

  int A, B, C;
  maior (A, B, C);

  return 0;
}