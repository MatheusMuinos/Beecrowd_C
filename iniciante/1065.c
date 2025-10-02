#include <stdio.h>
 
int main() {
    
    int numeros[5];
    int contador;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            contador ++;
        }
    }
    
    printf("%d valores pares\n", contador);
    
    return 0;
}