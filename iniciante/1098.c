#include <stdio.h>
#include <math.h>

int main() {
    double I = 0;
    double J_inicio = 1;
    double J_fim = 3;
    double epsilon = 1e-9; // margem para erros de ponto flutuante

    while (I <= 2.01) {
        for (double J = J_inicio; J <= J_fim + epsilon; J++) {
            if (fabs(I - (int)I) < epsilon)
                printf("I=%d ", (int)I);
            else
                printf("I=%.1f ", I);

            if (fabs(J - (int)J) < epsilon)
                printf("J=%d\n", (int)J);
            else
                printf("J=%.1f\n", J);
        }
        I += 0.2;
        J_inicio += 0.2;
        J_fim += 0.2;
    }
    return 0;
}