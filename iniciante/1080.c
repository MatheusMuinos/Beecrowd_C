#include <stdio.h>
 
int main() {
    
    int n;
    int ant = 0;
    int pos = 0;
    
    for (int i = 0; i < 100; i++) {
        scanf("%d", &n);
        
        if (n > ant) {
            ant = n;
            pos = i;
        }
    }
    
    printf("%d\n", ant);
    printf("%d\n", pos + 1);

    return 0;
}