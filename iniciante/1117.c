#include <stdio.h>
 
int main() {
 
    double nota;
    double soma = 0.0;
    int contador = 0;

    scanf("%lf", &nota);

    while (contador < 2) {
        
        if (nota < 0.0 || nota > 10.0) {
            printf("nota invalida\n");
        } else {
            soma = soma + nota;
            contador++;
        }
        
        scanf("%lf", &nota);
    }

    if (contador == 2) {
        printf("media = %.2f\n", soma / 2.0);
    }

    return 0;
}