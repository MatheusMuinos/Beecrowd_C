#include <stdio.h>
 
int main() {
    int I = 1;
    int J_inicio = 7;
    int J_fim = 5;

    while (I <= 9) {
        for (int J = J_inicio; J >= J_fim; J--) {
            printf("I=%d J=%d\n", I, J);
        }
        I += 2;
        J_inicio += 2;
        J_fim += 2;
    }
    return 0;
}