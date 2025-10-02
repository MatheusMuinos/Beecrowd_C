#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int inteiros[n];
    int quadrado = 0;
    int pos = 0;
    
    if ( n < 5 || n > 2000) {
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            inteiros[pos] = i;
            pos++;
        }
    }

    for (int i = 0; i < pos; i++){
        quadrado = inteiros[i]*inteiros[i];
        printf("%d^2 = %d\n", inteiros[i], quadrado);
        quadrado = 0;
    }
    
    
    return 0;
    
}
    