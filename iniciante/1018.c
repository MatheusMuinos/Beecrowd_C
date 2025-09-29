#include <stdio.h>

void calcular_notas(int valor, int* notas100, int* notas50, int* notas20, int* notas10, int* notas5, int* notas2, int* notas1) {
    *notas100 = valor / 100; // Calcula quantas notas de 100
    valor %= 100; // Atualiza o valor restante

    *notas50 = valor / 50; // Calcula quantas notas de 50
    valor %= 50;

    *notas20 = valor / 20; // Calcula quantas notas de 20
    valor %= 20;

    *notas10 = valor / 10; // Calcula quantas notas de 10
    valor %= 10;

    *notas5 = valor / 5; // Calcula quantas notas de 5
    valor %= 5;

    *notas2 = valor / 2; // Calcula quantas notas de 2
    valor %= 2;

    *notas1 = valor; // O valor restante será em notas de 1
}

int main() {
    int valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    scanf("%d", &valor);

    // Chama a função para calcular as notas
    calcular_notas(valor, &notas100, &notas50, &notas20, &notas10, &notas5, &notas2, &notas1);

    // Exibe o resultado
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;
}
