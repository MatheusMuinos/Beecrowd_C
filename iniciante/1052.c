#include<stdio.h>

int main () {
    
    int n;
    const char *meses[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    
    scanf("%d", &n);
    
    if (n >= 0 && n <=12) {
        printf("%s\n", meses[n-1]);
    }
}