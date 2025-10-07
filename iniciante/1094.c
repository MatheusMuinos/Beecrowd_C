#include <stdio.h>
 
int main() {

    int ratos = 0, sapos = 0, coelhos = 0;
    int n;
    int quantidade; 
    char tipo;
    int total;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d %c", &quantidade, &tipo);
        
        if (tipo == 'C') {
            coelhos = coelhos + quantidade;
        } else if (tipo == 'R') {
            ratos = ratos + quantidade;
        } else if (tipo == 'S') {
            sapos = sapos + quantidade;
        }
    }
    
    total = coelhos + ratos + sapos;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    
    printf("Percentual de coelhos: %.2f %%\n", (coelhos/(float)total)*100);
    printf("Percentual de ratos: %.2f %%\n", (ratos/(float)total)*100);
    printf("Percentual de sapos: %.2f %%\n", (sapos/(float)total)*100);
    
    return 0;
}