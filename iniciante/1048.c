#include <stdio.h>

void reajuste(float salario, float *novo_salario, float *reajuste_ganho, int *percentual) {
    if (0 < salario && salario <= 400) {
        *percentual = 15;
    } else if (400 < salario && salario <= 800) {
        *percentual = 12;
    } else if (800 < salario && salario <= 1200) {
        *percentual = 10;
    } else if (1200 < salario && salario <= 2000) {
        *percentual = 7;
    } else if (salario > 2000) {
        *percentual = 4;
    }

    *reajuste_ganho = salario * (*percentual / 100.0);
    *novo_salario = salario + *reajuste_ganho;
}

int main() {
    float salario, novo_salario, reajuste_ganho;
    int percentual;

    scanf("%f", &salario);

    reajuste(salario, &novo_salario, &reajuste_ganho, &percentual);

    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste_ganho);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
