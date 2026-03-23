#include <stdio.h>


int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", fibonacci(i));
    }
    printf("\n");

    return 0;
}