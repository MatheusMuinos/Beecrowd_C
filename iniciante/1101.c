#include <stdio.h>

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    while (x > 0 && y > 0) {
        int soma = 0;

        if (x < y) {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int i = y; i <= x; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("Sum=%d\n", soma);

        scanf("%d %d", &x, &y);
    }

    return 0;
}
