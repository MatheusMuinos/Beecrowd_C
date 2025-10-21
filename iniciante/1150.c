#include <stdio.h>

int main() {
    int x, z;
    int soma = 0;
    int contador = 0;

    scanf("%d", &x);

    do {
        scanf("%d", &z);
    } while (z <= x);

    for (int i = x; soma <= z; i++) {
        soma += i;
        contador++;
    }

    printf("%d\n", contador);

    return 0;
}
