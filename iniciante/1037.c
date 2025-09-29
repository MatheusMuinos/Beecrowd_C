#include <stdio.h>

void intervalo(float x) {
  
    if (x < 0 || x > 100) {
        printf("Fora de intervalo\n");
      
    } else if (0 <= x && x <= 25) {
        printf("Intervalo [0,25]\n");
      
    } else if (25 < x && x <= 50) {
        printf("Intervalo (25,50]\n");
      
    } else if (50 < x && x <= 75) {
        printf("Intervalo (50,75]\n");
      
    } else if (75 < x && x <= 100) {
        printf("Intervalo (75,100]\n");
    }
}

int main() {
    float A;
    scanf("%f", &A);
    intervalo(A);
    return 0;
}
