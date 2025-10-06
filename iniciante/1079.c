#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    double valor1, valor2, valor3;
    double media[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
        media[i] = ((valor1 * 2) + (valor2 * 3) + (valor3 * 5)) / 10;
    }
    for (int i = 0; i < n; i++) {
        printf("%.1lf\n", media[i]);
    }
    
    return 0;
}