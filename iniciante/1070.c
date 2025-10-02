#include <stdio.h>
 
int main() {
    
    int impares[6];
    int x;
    
    scanf("%d", &x);
    
    if (x % 2 == 0) {
        x++;
    }
    
    for (int i = 0; i < 6; i++){
        impares[i] = x + 2 * i;
    }
    
    for(int i = 0; i < 6; i++){
        printf("%d\n", impares[i]);
    }
    
    return 0;
}