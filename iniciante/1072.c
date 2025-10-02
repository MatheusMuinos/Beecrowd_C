#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int inteiros[n];
    int in = 0;
    int out = 0;

    
    for(int i = 0; i < n; i++) {
        scanf("%d", &inteiros[i]);
    }

    for(int i = 0; i < n; i++) {
        if (10 <= inteiros[i] && inteiros[i] <= 20) {
            in++;
        } else {
            out++;
        }
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0;
}