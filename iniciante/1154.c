#include <stdio.h>

int main() {

    int idade, contador = 0;
    float soma = 0, media = 0;

    while (1) {

        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        soma = soma + idade;
        contador++;

    }

    media = soma / contador;
    
    printf("%.2f\n", media);

    return 0;
}