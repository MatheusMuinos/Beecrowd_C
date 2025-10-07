#include <stdio.h>
 
int main() {
    int I = 1;
    while (I <= 9) {
        for (int J = 7; J >= 5; J--) {
            printf("I=%d J=%d\n", I, J);
        }
        I += 2;
    }
    return 0;
}