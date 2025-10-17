#include <stdio.h>
#include <stdbool.h>
 
int main() {
 
    int contador = 0;
    int v_inter = 0;
    int v_gremio = 0;
    int empates = 0;
    int gg, gi;
    int opcao;
    bool recomeca = true;
    
    
    while (recomeca == true) {
        contador ++;
        scanf("%d %d", &gi, &gg);
        
        if (gi > gg) {
            v_inter ++;
        }
        if (gi < gg) {
            v_gremio ++;
        }

        if (gg == gi) {
            empates ++;
        }
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);
        if (opcao == 2) {
            recomeca = false;
        }
        
    }
    
    printf("%d grenais\n", contador);
    printf("Inter:%d\n", v_inter);
    printf("Gremio:%d\n", v_gremio);
    printf("Empates:%d\n", empates);
    printf("%s\n", 
        v_inter > v_gremio ? "Inter venceu mais" :
        v_gremio > v_inter ? "Gremio venceu mais" :
        "Nao houve vencedor"
    );
    
    return 0;
}