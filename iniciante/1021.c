#include <stdio.h>

void decompor(double valor) {
    // Declaração dos arrays com as denominações disponíveis de notas e moedas
    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    // Inicialização dos arrays que armazenarão a quantidade de cada denominação de notas e moedas
    int quantidade_notas[6] = {0};
    int quantidade_moedas[6] = {0};

    // Loop para calcular a quantidade de cada denominação de notas
    for (int i = 0; i < 6; i++) {
        // Calcula a quantidade de notas da denominação atual
        quantidade_notas[i] = (int)(valor / notas[i]);
        // Atualiza o valor restante subtraindo o total de notas usadas
        valor -= quantidade_notas[i] * notas[i];
    }

    // Adiciona uma pequena margem de erro para lidar com arredondamento de ponto flutuante
    valor += 0.00001;

    // Loop para calcular a quantidade de cada denominação de moedas
    for (int i = 0; i < 6; i++) {
        // Calcula a quantidade de moedas da denominação atual
        quantidade_moedas[i] = (int)(valor / moedas[i]);
        // Atualiza o valor restante subtraindo o total de moedas usadas
        valor -= quantidade_moedas[i] * moedas[i];
    }

    // Imprime as quantidades de cada denominação de notas
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2f\n", quantidade_notas[i], (double)notas[i]);
    }

    // Imprime as quantidades de cada denominação de moedas
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2f\n", quantidade_moedas[i], (double)moedas[i]);
    }
}

int main() {
    double valor; // Declara a variável valor como double para lidar com valores decimais

    // Lê o valor monetário de entrada com duas casas decimais
    scanf("%lf", &valor);

    // Chama a função decompor para calcular a quantidade de cada denominação de notas e moedas
    decompor(valor);

    return 0;
}
