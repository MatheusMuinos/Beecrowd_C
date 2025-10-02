#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int inteiros[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &inteiros[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int valor = inteiros[i];
        if (valor == 0) {
            printf("NULL\n");
        } else {
            char *paridade = (valor % 2 == 0) ? "EVEN" : "ODD";
            char *sinal = (valor > 0) ? "POSITIVE" : "NEGATIVE";
            printf("%s %s\n", paridade, sinal);
        }
    }
 
    return 0;
}