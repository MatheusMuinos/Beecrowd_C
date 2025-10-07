#include <stdio.h>
 
int main() {

    int I = 1;
    int J = 60;
    
    printf("I=%d J=%d\n", I, J);
    
    while (J != 0) {
        I += 3;
        J -= 5;
        printf("I=%d J=%d\n", I, J);
    }
    return 0;
}