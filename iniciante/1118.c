#include <stdio.h>

int main() {
    float nota, soma;
    int contador, opcao;

    do {
        soma = 0.0;
        contador = 0;

        while (contador < 2) {
            scanf("%f", &nota);
            if (nota < 0.0 || nota > 10.0) {
                printf("nota invalida\n");
            } else {
                soma += nota;
                contador++;
            }
        }

        printf("media = %.2f\n", soma / 2.0);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        } while (opcao != 1 && opcao != 2);

    } while (opcao == 1);

    return 0;
}
