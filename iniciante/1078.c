#include <stdio.h>
 
int main() {
 
    int n;
    int produto = 0;
    scanf("%d", &n);
    
    for (int i = 1; i <= 10; i++) {
        produto = i * n;
        printf("%d x %d = %d\n", i, n, produto);
        produto = 0;
    }
    
    return 0;
}