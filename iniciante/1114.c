#include <stdio.h>
#include <stdbool.h>

int main() {
 
    bool senha = false;
    int tentativa;
    int correta = 2002;
    
    while (senha == false) {

        scanf("%d", &tentativa);
        
        if (tentativa == correta) {
            senha = true;
            printf("Acesso Permitido\n");
            break;
        }
        
        printf("Senha Invalida\n");
    }
    
    return 0;
}