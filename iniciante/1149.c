#include <stdio.h>

int soma_cons(int a, int n){
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += a + i;
    }
    return soma;
}

int main(void) {
    int x, y;
    scanf("%d", &x);   

    do {
        scanf("%d", &y);       
    } while (y <= 0);

    printf("%d\n", soma_cons(x, y));
    return 0;
}
